/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCItemID, BRCAccountSession, NSString, BRCLocalContainer;

@interface BRCPackageManifestForDownload : NSObject  {
    BRCLocalContainer *_container;
    BRCAccountSession *_session;
    NSString *_etag;
    NSString *_manifestPath;
    unsigned long long _manifestFileID;
    unsigned long long _stageManifestFileID;
    unsigned int _correspondingLiveDocumentID;
    BRCItemID *_itemID;
    NSString *_manifestID;
    unsigned long long _correspondingLiveFileID;
}

@property unsigned int correspondingLiveDocumentID;
@property unsigned long long correspondingLiveFileID;
@property(readonly) NSString * manifestID;
@property(readonly) BRCItemID * itemID;

+ (id)stagedPackageRootFileIDForItemID:(id)arg1 etag:(id)arg2 container:(id)arg3;
+ (id)itemIDForManifestID:(id)arg1 etag:(id*)arg2;
+ (id)manifestIDForItemID:(id)arg1 etag:(id)arg2;

- (void)setCorrespondingLiveFileID:(unsigned long long)arg1;
- (unsigned long long)correspondingLiveFileID;
- (void)setCorrespondingLiveDocumentID:(unsigned int)arg1;
- (unsigned int)correspondingLiveDocumentID;
- (id)manifestID;
- (id)desiredIndicesInPackage:(id)arg1;
- (bool)stagePackageWithContentRecord:(id)arg1 error:(id*)arg2;
- (bool)enumerateStagedItems:(id)arg1;
- (bool)beginStageWithManifestPath:(id)arg1 error:(id*)arg2;
- (id)manifestPath;
- (id)initWithContainer:(id)arg1 itemID:(id)arg2 etag:(id)arg3;
- (bool)enumerateItems:(id)arg1;
- (bool)_stageExistingPackageItem:(id)arg1 withLiveFd:(int)arg2 stageFd:(int)arg3;
- (void)_applyDirectoryMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyFileMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (bool)_packageItem:(id)arg1 matchesMode:(unsigned short)arg2;
- (unsigned short)_computedFileModeForPackageItem:(id)arg1;
- (bool)_enumerateItemsOfClass:(Class)arg1 fileID:(unsigned long long)arg2 handler:(id)arg3;
- (id)itemID;
- (void).cxx_destruct;

@end
