//
//  RCSummaryObject.h
//  Marvelous
//
//  Copyright (c) 2014 Rock & Code [http://rock-n-code.com]
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

/*!
 @header

 RCSummaryObject class.

 @author Javier Cicchelli (\@monsieur_rock)

 @copyright 2014, Rock & Code released under MIT License. See the LICENSE file for more information.

 @version 0.7.3
 */

#import <Foundation/Foundation.h>

#import "RCObject.h"

/*!
 @class

 This class is a summary representation of a particular resource.
 */
@interface RCSummaryObject : RCObject

/*!
 @property
 
 This property gets the canonical name of the resource.
 */
@property (nonatomic, readonly, strong) NSString *name;

/*!
 @property

 This property gets the type of the resource if defined. Otherwise, it gets a NULL value.
 */
@property (nonatomic, readonly, strong) NSString *type;

/*!
 @property

 This optional property gets the role of the resource in a parent entity if defined. Otherwise, it gets a NULL value.
 */
@property (nonatomic, readonly, strong) NSString *role;

/*!
 @property

 This property gets a URL object with the path to the resource.
 */
@property (nonatomic, readonly, strong) NSURL *resourceURI;

@end
