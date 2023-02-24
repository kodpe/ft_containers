/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloquet <sloquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:28:16 by sloquet           #+#    #+#             */
/*   Updated: 2023/02/23 23:30:40 by sloquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int	main(void)
{
	// Create a vector containing integers
	std::vector<int> v = {7, 5, 16, 8};

	// Add two integers to vector
	v.push_back(25);
	v.push_back(13);

	// Print out the vector
	std::cout << "v = { ";
	for (int n : v)
		std::cout << n << ", ";
	std::cout << "}; \n";
	return 0;
}
