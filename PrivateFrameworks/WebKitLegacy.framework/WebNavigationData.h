/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject  {
    WebNavigationDataPrivate *_private;
}


- (id)url;
- (id)clientRedirectSource;
- (bool)hasSubstituteData;
- (id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(bool)arg5 clientRedirectSource:(id)arg6;
- (id)title;
- (id)originalRequest;
- (id)response;
- (void)dealloc;

@end
