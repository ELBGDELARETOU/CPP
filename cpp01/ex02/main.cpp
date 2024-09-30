/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:56:48 by anaouali          #+#    #+#             */
/*   Updated: 2024/09/30 14:22:38 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;

    stringREF = var;
    
    std::cout << "this is the adress of the string : " << &var << std::endl;   
    std::cout << "this is the adress of the pointer : " << &stringPTR << std::endl;   
    std::cout << "this is the adress of the reference : " << &stringREF << std::endl;   
    
    std::cout << "this is the string : " << var << std::endl;   
    std::cout << "this is the string in the pointer : " << *stringPTR << std::endl;   
    std::cout << "this is the string in the reference: " << stringREF << std::endl;   

}