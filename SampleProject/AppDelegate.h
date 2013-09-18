
#import <MapKit/MapKit.h>
#import "SMCalloutView.h"
#import "SMMapView.h"
#import "SMMapAnnotation.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, MKMapViewDelegate, SMCalloutViewDelegate>
@property (strong, nonatomic) UIWindow *window;
@end