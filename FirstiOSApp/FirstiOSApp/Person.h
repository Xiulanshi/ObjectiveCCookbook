//
//  Person.h
//  FirstiOSApp
//
//  Created by Xiulan Shi on 3/29/16.
//  Copyright © 2016 Xiulan Shi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, assign) CGFloat currentHeight;

+ (CGFloat) maximumHeightInCentimeters;
+ (CGFloat) minimumHeightInCentimeters;

//- (void) walkAtKilometerPerHour:(CGFloat)paramSpeedKilometersPerHour;
//- (void) runAt10KilometersPerHour;


@end
