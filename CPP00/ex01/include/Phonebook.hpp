/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pat <pat@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:50:12 by pat               #+#    #+#             */
/*   Updated: 2023/02/21 20:29:21 by pat              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
public:

	Phonebook();
	~Phonebook();

	Contact getContact(int index) const;
	int		getCount() const;

	void setContact(Contact contact);

private:

	static int		_count;

	Contact _contacts[8];
	int		_index;
};
#endif