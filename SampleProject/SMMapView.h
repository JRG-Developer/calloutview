//
//  SMMapView.h
//  CalloutViewSamples
//
//  Created by Joshua Greene on 9/17/13.
//
//

#import <MapKit/MapKit.h>

#import "SMCalloutView.h"

// We need a custom subclass of MKMapView in order to allow touches on UIControls in our callout view.

@interface SMMapView : MKMapView
@property (strong, nonatomic) SMCalloutView *calloutView;
@end