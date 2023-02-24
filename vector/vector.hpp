/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloquet <sloquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 22:44:06 by sloquet           #+#    #+#             */
/*   Updated: 2023/02/24 02:40:217 by sloquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_TEMPLATE_HPP
# define FT_VECTOR_TEMPLATE_HPP

#include <iostream>
#include <exception>
#include <iterator>
#include <algorithm>

namespace ft {
	template< class T, class Allocator = std::allocator<T> >
	class vector {
		public:

		// types
		typedef T										value_type;
		typedef Allocator								allocator_type;
		typedef	std::size_t								size_type;
		typedef	std::ptrdiff_t							difference_type;
		typedef typename Allocator::reference 			reference;
		typedef typename Allocator::const_reference 	const_reference;
		typedef typename Allocator::pointer				pointer;
		typedef typename Allocator::const_pointer		const_pointer;
		typedef ft::normal_iterator<pointer>			iterator;
		typedef ft::normal_iterator<const_pointer>		const_iterator;
		typedef ft::reverse_iterator<iterator>			reverse_iterator;
		typedef ft::reverse_iterator<const_iterator>	const_reverse_iterator;

		// construct/destroy/copy/assign/get_allocator
								vector();
		explicit				vector( const Allocator& alloc );
		explicit				vector( size_type count,
									const T& value = T(),
									const Allocator& alloc = Allocator() );
		template< class InputIt >
								vector( InputIt first, InputIt last,
									const Allocator& alloc = Allocator() );
								vector( const vector& other );
								~vector();
		vector&					operator=( const vector& other );
		void					assign( size_type count, const T& value );
		template< class InputIt >
		void					assign( InputIt first, InputIt last);
		allocator_type			get_allocator() const;

		// iterators
		iterator				begin();
		const_iterator			begin() const;
		iterator				end();
		const_iterator			end() const;
		reverse_iterator		rbegin();
		const_reverse_iterator	rbegin() const;
		reverse_iterator		rend();
		const_reverse_iterator	rend() const;

		// capacity
		bool					empty() const;
		size_type				size() const;
		size_type				max_size() const;
		void					reserve( size_type new_cap );
		size_type				capacity() const;

		// element access
		reference				at( size_type pos );
		const_reference			at( size_type pos ) const;
		reference				operator[]( size_type pos );
		const_reference			operator[]( size_type pos ) const;
		reference				front();
		const_reference			front() const;
		reference				back();
		const_reference			back() const;

		// data access
		T*						data();
		const T*				data() const;

		// modifiers
		void					clear();
		iterator				insert( const_iterator pos, const T& value );
		iterator				insert( const_iterator pos, size_type count, const T& value );
		template< class InputIt>
		iterator				insert( const_iterator pos, InputIt first, InputIt last );
		iterator				erase( iterator pos );
		iterator				erase( iterator first, iterator last );
		void					push_back( const T& value );
		void					pop_back();
		void					resize( size_type count, T value = T() );
		void					swap( vector& other );
	};

	template< class T, class Alloc >
	bool	operator==	( const ft::vector<T, Alloc>& lhs,
						  const ft::vector<T, Alloc>& rhs );

	template< class T, class Alloc >
	bool	operator!=	( const ft::vector<T, Alloc>& lhs,
						  const ft::vector<T, Alloc>& rhs );

	template< class T, class Alloc >
	bool	operator<	( const ft::vector<T, Alloc>& lhs,
						  const ft::vector<T, Alloc>& rhs );

	template< class T, class Alloc >
	bool	operator<=	( const ft::vector<T, Alloc>& lhs,
						  const ft::vector<T, Alloc>& rhs );

	template< class T, class Alloc >
	bool	operator>	( const ft::vector<T, Alloc>& lhs,
						  const ft::vector<T, Alloc>& rhs );

	template< class T, class Alloc >
	bool	operator>=	( const ft::vector<T, Alloc>& lhs,
						  const ft::vector<T, Alloc>& rhs );

	template< class T, class Alloc >
	void	swap( ft::vector<T, Alloc>& lhs,
				  ft::vector<T, Alloc>& rhs );

	/***** DEFINITION *****/

	// todo ...

} /* namespace ft */

#endif /* FT_VECTOR_TEMPLATE_HPP */
