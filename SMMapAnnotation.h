//
//  SMMapAnnotation.h
//  CalloutViewSamples
//
//  Created by Joshua Greene on 9/17/13.
//
//

#import <MapKit/MapKit.h>

// We need a trivial concrete class that implements MKAnnotation in order to put a pin on MKMapView.

@interface SMMapAnnotation : NSObject <MKAnnotation>
@property (nonatomic, copy) NSString *title, *subtitle;
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate title:(NSString *)title subtitle:(NSString *)subtitle;
@end