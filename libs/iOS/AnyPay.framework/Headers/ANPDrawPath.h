//
//  ANPDrawPoints.h
//  AnyPay
//
//  Created by Ankit Gupta on 14/05/18.
//  Copyright © 2018 Dan McCann. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ANPDrawPath : NSObject

@property (nonatomic, strong) NSValue *start;
@property (nonatomic, strong) NSValue *move;
@property (nonatomic, strong) NSValue *end;

@end
