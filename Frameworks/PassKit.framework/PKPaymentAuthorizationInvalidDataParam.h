/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSError;

@interface PKPaymentAuthorizationInvalidDataParam : NSObject  {
    bool_animated;
    long long _dataType;
    NSError *_error;
}

@property long long dataType;
@property(retain) NSError * error;
@property bool animated;

+ (id)param;

- (void)setDataType:(long long)arg1;
- (long long)dataType;
- (void)setError:(id)arg1;
- (id)error;
- (void)setAnimated:(bool)arg1;
- (bool)animated;

@end
