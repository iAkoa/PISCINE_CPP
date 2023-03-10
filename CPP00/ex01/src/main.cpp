/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 01:34:13 by pat               #+#    #+#             */
/*   Updated: 2023/03/08 10:10:46 by rmattheo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <unistd.h>
#include <stdlib.h>

void addContact(Phonebook *phonebook)
{
	Contact 	contact;
	std::string str;

	std::cout << "First name: ";
	std::getline(std::cin, str);
	contact.setFirstName(str);
	std::cout << "Last name: ";
	std::getline(std::cin, str);
	contact.setLastName(str);
	std::cout << "Nickname: ";
	std::getline(std::cin, str);
	contact.setNickName(str);
	std::cout << "Phone number: ";
	std::getline(std::cin, str);
	contact.setPhoneNumber(str);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, str);
	contact.setSecret(str);
	phonebook->setContact(contact);
}

std::string truncate(std::string str)
{
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void searchContact(Phonebook *phonebook)
{
	int count;

	count = phonebook->getCount();
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int i=0; i < phonebook->getCount(); i++)
	{
		Contact contact;
		contact = phonebook->getContact(i);
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(contact.getFirstName());
		std::cout << "|" << std::setw(10) << truncate(contact.getLastName());
		std::cout << "|" << std::setw(10) << truncate(contact.getNickName()) << "|" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	if (count > 0)
	{
		int index;
		std::string command;
		std::cout << "Please enter an index for relevant information: ";
		while (std::getline(std::cin, command))
		{
			try
			{
				index = std::atoi(command.c_str());
				if (index <= count && index > 0)
					break;
				else
					std::cout << "Invalid input. Please enter an index between 1 and " << count << ": ";
			}
			catch(std::exception &err)
			{
				std::cout << "Invalid input. Please enter an index between 1 and " << count << ": ";
			}
		}
		index--;
		Contact tmp;
		tmp = phonebook->getContact(index);
		std::cout << std::endl;
		std::cout << "First name: " << tmp.getFirstName() << std::endl;
		std::cout << "Last name: " << tmp.getLastName() << std::endl;
		std::cout << "Nickname: " << tmp.getNickName() << std::endl;
		std::cout << "Phone number: " << tmp.getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << tmp.getSecret() << std::endl;
	}
	else
	{
		std::cout << "Table is empty!" << std::endl;
	}
}

int main()
{
	Phonebook phonebook;
	std::string command;

	std::cout << "Command info: " << std::endl;
	std::cout << " -ADD: add a contact to the phonebook" << std::endl;
	std::cout << " -SEARCH: search for a contact in the phonebook" << std::endl;
	std::cout << " -EXIT: quit the program" << "\n\n\n";
	std::cout << "Enter a command: ";
	while (std::getline(std::cin, command))
	{
		if (std::cin.eof())
			_exit(0);
		if (command == "ADD")
			addContact(&phonebook);
		else if (command == "SEARCH")
			searchContact(&phonebook);
		else if (command == "EXIT")
			_exit(0);
		std::cout << std::endl << "Enter a command: ";
	}
}