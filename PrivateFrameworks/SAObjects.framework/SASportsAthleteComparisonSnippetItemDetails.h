/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAUIAppPunchOut, SASportsMetadata, NSString;

@interface SASportsAthleteComparisonSnippetItemDetails : AceObject <SAAceSerializable> {
}

@property(retain) SAUIAppPunchOut * leagueAppPunchOut;
@property(retain) SASportsMetadata * metadata;
@property(retain) SAUIAppPunchOut * providerPunchOut;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)athleteComparisonSnippetItemDetailsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)athleteComparisonSnippetItemDetails;

- (void)setProviderPunchOut:(id)arg1;
- (id)providerPunchOut;
- (void)setLeagueAppPunchOut:(id)arg1;
- (id)leagueAppPunchOut;
- (id)encodedClassName;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)groupIdentifier;

@end
