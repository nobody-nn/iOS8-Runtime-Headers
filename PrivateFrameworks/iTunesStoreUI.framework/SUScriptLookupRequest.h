/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SSLookupRequest;

@interface SUScriptLookupRequest : SUScriptObject  {
    SSLookupRequest *_request;
}

@property(retain) id authenticatesIfNeeded;
@property(copy) NSString * keyProfile;
@property long long localizationStyle;
@property(readonly) long long localizationStyleDevice;
@property(readonly) long long localizationStyleServer;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (long long)localizationStyleServer;
- (long long)localizationStyleDevice;
- (void)startWithLookupFunction:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setAuthenticatesIfNeeded:(id)arg1;
- (id)authenticatesIfNeeded;
- (void)setLocalizationStyle:(long long)arg1;
- (long long)localizationStyle;
- (void)setKeyProfile:(id)arg1;
- (id)keyProfile;
- (id)valueForRequestParameter:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)attributeKeys;
- (id)init;
- (void)dealloc;

@end
