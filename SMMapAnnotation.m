//
//  SMMapAnnotation.m
//  CalloutViewSamples
//
//  Created by Joshua Greene on 9/17/13.
//
//

#import "SMMapAnnotation.h"

@implementation SMMapAnnotation

- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate title:(NSString *)title subtitle:(NSString *)subtitle
{
    self = [super init];
    
    if (self)
    {
        _coordinate = coordinate;
        _title = title;
        _subtitle = subtitle;
    }
    
    return self;
}

@end