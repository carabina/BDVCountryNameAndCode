//
//  BDVCountryNameAndCode.h
//  BDVCountryNameAndCode
//
//  Created by Bas de Vries on 22-10-14.
//  Copyright (c) 2014 Bas de Vries. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BDVCountryNameAndCode : NSObject

@property (nonatomic, copy) NSDictionary *dictDialingCodes;
@property (nonatomic, copy) NSArray *countryNames;
@property (nonatomic, copy) NSArray *prefixDialingCodes;

-(NSString *)prefixForCurrentLocale;
-(NSString *)countryNameForCurrentLocale;

@end
