/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject  {
    NSMutableData *_trafficColors;
    NSMutableData *_trafficOffsets;
    unsigned int _trafficDistance;
}


- (void)_removeDuplicateTraffic;
- (void)addTrafficFromETARoute:(id)arg1;
- (void)addTrafficFromRoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)copyTrafficToRoute:(id)arg1;
- (void)addTrafficFromRoute:(id)arg1 withStepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (void)dealloc;

@end
