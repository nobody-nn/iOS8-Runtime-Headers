/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSIndexSet, NSString, UIImage, NSURL, NSData, NSDate, NSManagedObjectID, PHObjectPlaceholder, PHContentEditingOutput, CLLocation, PHChangeRequestHelper;

@interface PHAssetChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool_didChangeAdjustments;
    PHContentEditingOutput *_contentEditingOutput;
    NSString *_editorBundleID;
    NSURL *_editorBundleURL;
    CLLocation *_updatedLocation;
    PHChangeRequestHelper *_helper;
    bool_entitled;
    NSString *_clientName;
    int _clientProcessID;
    NSIndexSet *_supportedEditOperations;
    UIImage *_imageForInsertion;
    NSData *_imageDataForInsertion;
    NSString *_imageTypeForInsertion;
    NSURL *_imageURLForInsertion;
    NSURL *_videoURLForInsertion;
}

@property(readonly) PHObjectPlaceholder * placeholderForCreatedAsset;
@property(retain) NSDate * creationDate;
@property(retain) CLLocation * location;
@property(getter=isFavorite) bool favorite;
@property(getter=isHidden) bool hidden;
@property(retain) PHContentEditingOutput * contentEditingOutput;
@property(retain) NSIndexSet * supportedEditOperations;
@property(retain) UIImage * imageForInsertion;
@property(retain) NSData * imageDataForInsertion;
@property(retain) NSString * imageTypeForInsertion;
@property(retain) NSURL * imageURLForInsertion;
@property(retain) NSURL * videoURLForInsertion;
@property(readonly) PHChangeRequestHelper * helper;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSString * managedEntityName;
@property(readonly) NSString * uuid;
@property(readonly) NSManagedObjectID * objectID;
@property(getter=isEntitled,readonly) bool entitled;
@property(readonly) NSString * clientName;
@property(readonly) int clientProcessID;
@property(getter=isNew,readonly) bool new;
@property(getter=isMutated,readonly) bool mutated;

+ (id)changeRequestForAsset:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (void)deleteAssets:(id)arg1;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (void)_createAssetFromVideoURL:(id)arg1 uuid:(id)arg2;
+ (void)_createAssetFromImageData:(id)arg1 imageType:(id)arg2 uuid:(id)arg3 creationDate:(id)arg4;
+ (id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2;
+ (id)_allAssetEditOperations;
+ (id)creationRequestForAssetFromImageData:(id)arg1;

- (void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(bool)arg5 fullSizeRenderSize:(struct CGSize { double x1; double x2; })arg6;
- (id)placeholderForCreatedAsset;
- (void)revertAssetContentToOriginal;
- (bool)validateVideoURLForAssetMutation:(id)arg1 error:(id*)arg2;
- (bool)validateImageURLForAssetMutation:(id)arg1 error:(id*)arg2;
- (bool)validateAdjustmentDataForAssetMutation:(id)arg1 error:(id*)arg2;
- (id)imageURLForInsertion;
- (bool)validateImageDataForAssetCreation:(id)arg1 error:(id*)arg2;
- (bool)_validateContentEditingOutput:(id)arg1 error:(id*)arg2;
- (bool)_validateContentURL:(id)arg1 error:(id*)arg2 writeAccessRequired:(bool)arg3;
- (bool)validateVideoURLForAssetCreation:(id)arg1 error:(id*)arg2;
- (id)imageTypeForInsertion;
- (id)supportedEditOperations;
- (void)setContentEditingOutput:(id)arg1;
- (id)videoURLForInsertion;
- (id)imageForInsertion;
- (id)imageDataForInsertion;
- (long long)_mediaTypeForCreatedAsset;
- (void)setVideoURLForInsertion:(id)arg1;
- (void)setImageForInsertion:(id)arg1;
- (void)setImageDataForInsertion:(id)arg1;
- (id)initForNewObjectWithUUID:(id)arg1;
- (void)setImageURLForInsertion:(id)arg1;
- (void)setSupportedEditOperations:(id)arg1;
- (void)setImageTypeForInsertion:(id)arg1;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)isMutated;
- (void)didMutate;
- (id)mutations;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)canGenerateUUIDLocally;
- (id)initForNewObject;
- (int)clientProcessID;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 entitled:(bool)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (bool)isRevertingContentToOriginal;
- (id)contentEditingOutput;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)isEntitled;
- (id)managedEntityName;
- (void)setFavorite:(bool)arg1;
- (bool)isFavorite;
- (id)helper;
- (bool)isNew;
- (void)setHidden:(bool)arg1;
- (id)location;
- (id)objectID;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (id)uuid;
- (bool)isHidden;
- (id)clientName;
- (void)setLocation:(id)arg1;
- (void).cxx_destruct;
- (bool)isHiding;

@end
