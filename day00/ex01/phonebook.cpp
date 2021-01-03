/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 14:23:22 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/01/02 19:13:03 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook( void )
{
    int i = 0;
    
    while (i <= 7)
    {
        this->contacts[i].first_name = "";
        this->contacts[i].last_name = "";
        this->contacts[i].nickname = "";
        this->contacts[i].login = "";
        this->contacts[i].postal_adress = "";
        this->contacts[i].email_adress = "";
        this->contacts[i].phone_number = "";
        this->contacts[i].birthday_date = "";
        this->contacts[i].favorite_meal = "";
        this->contacts[i].underwear_color = "";
        this->contacts[i].darkest_secret = ""; 
        i++;
    }
    return;
}

void    ft_add(phonebook *instance, int *i)
{
    std::cout << "input first name : ";
    std::cin.get();
    getline(std::cin, instance->contacts[*i].first_name);
    std::cout << "input last name : ";
    getline(std::cin, instance->contacts[*i].last_name);
    std::cout << "input nickname : ";
    getline(std::cin, instance->contacts[*i].nickname);
    std::cout << "input login : ";
    getline(std::cin, instance->contacts[*i].login);
    std::cout << "input postal adress : ";
    getline(std::cin, instance->contacts[*i].postal_adress);
    std::cout << "input email adress : ";
    getline(std::cin, instance->contacts[*i].email_adress);
    std::cout << "input phone number : ";
    getline(std::cin, instance->contacts[*i].phone_number);;
    std::cout << "input birthday date : ";
    getline(std::cin, instance->contacts[*i].birthday_date);
    std::cout << "input favorite meal : ";
    getline(std::cin, instance->contacts[*i].favorite_meal);
    std::cout << "input underwear color : ";
    getline(std::cin, instance->contacts[*i].underwear_color);
    std::cout << "input darkest secret : ";
    getline(std::cin, instance->contacts[*i].darkest_secret);
}

void    ft_display(phonebook *instance, int j)
{
    std::cout << "first name : ";
    std::cout << instance->contacts[j].first_name << std::endl;;
    std::cout << "last name : ";
    std::cout << instance->contacts[j].last_name << std::endl;;
    std::cout << "nickname : ";
    std::cout << instance->contacts[j].nickname << std::endl;;
    std::cout << "login : ";
    std::cout << instance->contacts[j].login << std::endl;;
    std::cout << "postal adress : ";
    std::cout << instance->contacts[j].postal_adress << std::endl;;
    std::cout << "email adress : ";
    std::cout << instance->contacts[j].email_adress << std::endl;;
    std::cout << "phone number : ";
    std::cout << instance->contacts[j].phone_number << std::endl;;
    std::cout << "birthday date : ";
    std::cout << instance->contacts[j].birthday_date << std::endl;;
    std::cout << "favorite meal : ";
    std::cout << instance->contacts[j].favorite_meal << std::endl;;
    std::cout << "underwear color : ";
    std::cout << instance->contacts[j].underwear_color << std::endl;;
    std::cout << "darkest secret : ";
    std::cout << instance->contacts[j].darkest_secret << std::endl;;
}

void    ft_search(phonebook *instance, int *i)
{
    int j = 0;
    std::string first;
    std::string last;
    std::string nickname;

    std::cout << "index     |" << "first name|" << "last name |" << "nickname  |" << std::endl;
    while (j < (*i))
    {
        first = instance->contacts[j].first_name;
        last = instance->contacts[j].last_name;
        nickname = instance->contacts[j].nickname;
        std::cout << j << "         |";
        ft_checkless(first, last);
        ft_checkmore(last, nickname);
        j++;
    }
    std::cout << "input contact's index to show : ";
    std::cin >> j;
    ft_display(instance, j);
}

int     main( void )
{
    phonebook instance;
    int i = 0;
    std::string buff;
    while (1)
    {
        std::cin >> buff;
        if (!(buff.compare("EXIT")))
            break ;
        else if (!(buff.compare("ADD")))
        {
            if (i <= 7)
            {
                ft_add(&instance, &i);
                i++;
            }
            else
                std::cout << "phonebook is FULL" << std::endl;
        }
        else if (!(buff.compare("SEARCH")))
            ft_search(&instance, &i);
        else 
            std::cout << "Bad arg!" << std::endl; 
    }
    return (0);
}