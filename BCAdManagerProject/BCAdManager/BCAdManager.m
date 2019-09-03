//
//  BCAdManager.m
//  BinaryConversionProiject
//
//  Created by Ning on 2019/8/24.
//  Copyright © 2019 Ning. All rights reserved.
//

#import "BCAdManager.h"


@implementation BCAdManager
+ (instancetype)shared {
    static BCAdManager *shared;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shared = [[BCAdManager alloc] init];
    });
    return shared;
}
@end
