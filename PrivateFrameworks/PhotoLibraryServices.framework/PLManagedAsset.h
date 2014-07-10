/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLMomentAssetData_Private-Protocol.h"
#import "UIActivityItemSource-Protocol.h"
#import "_PLImageLoadingAsset-Protocol.h"

@class CLLocation, NSArray, NSData, NSDate, NSDictionary, NSError, NSManagedObject, NSNumber, NSObject<NSCopying>, NSOrderedSet, NSSet, NSString, NSURL, PLAdditionalAssetAttributes, PLCloudFeedAssetsEntry, PLMoment, UIImage;

@interface PLManagedAsset : PLManagedObject <UIActivityItemSource, PLMomentAssetData_Private, _PLImageLoadingAsset>
{
    _Bool _didPrepareForDeletion;
    _Bool _isRegisteredForChanges;
    _Bool _needsMomentUpdate;
    _Bool _disableDupeAnalysis;
    _Bool _disableFileSystemPersistency;
    _Bool _didPersistEAs;
    _Bool _didLoadReverseGeoDescription;
    NSString *_reverseGeoDescription;
    NSURL *cachedNonPersistedVideoPlaybackURL;
    NSDate *cachedNonPersistedVideoPlaybackURLExpiration;
    NSError *cachedNonPersistedVideoPlaybackURLError;
    UIImage *inflightImageInMemory;
    NSString *inflightImagePath;
    UIImage *inflightIndexSheetImage;
    NSDictionary *inflightMetadata;
}

+ (id)uuidFromAssetURL:(id)arg1;
+ (id)uuidFromAssetURL:(id)arg1 fileExtension:(id *)arg2 sidecarIndex:(id *)arg3;
+ (id)fileURLFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 sidecar:(id *)arg3;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)assetsLibraryURLWithUUID:(id)arg1 extension:(id)arg2;
+ (int)wildcatStackFormat;
+ (int)wildcatPhotoScrubberFormat;
+ (int)formatForThumbnailGeneration;
+ (int)wildcatIndexSheetFormat;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)portraitScrubberThumbnailFormat;
+ (int)masterThumbnailFormat;
+ (int)feedEntryThumbnailFormat;
+ (int)largestNonJPEGThumbnailFormat;
+ (int)indexSheetUnbakedFormat;
+ (int)indexSheetBakedFormat;
+ (int)posterThumbnailFormat;
+ (int)thumbnailFormat;
+ (int)fullSizeImageFormat;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (_Bool)isValidFileExtensionForImport:(id)arg1;
+ (id)diagnosticFilePathForMainFilePath:(id)arg1;
+ (id)extensionForMediumThumbnailFile;
+ (id)extensionForLargeThumbnailFile;
+ (int)imageFormatFromAdjustmentBaseVersion:(long long)arg1;
+ (long long)adjustmentBaseVersionFromImageFormat:(int)arg1;
+ (id)pathForAdjustmentDirectoryWithMutationsDirectory:(id)arg1;
+ (id)pathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
+ (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
+ (short)assetTypeFromUniformTypeIdentifier:(id)arg1;
+ (id)uniformTypeIdentifierFromPathExtension:(id)arg1 assetType:(short)arg2;
+ (id)keyPathsForValuesAffectingIsJPEG;
+ (id)bestCreationDateForAssetAtURL:(id)arg1 modificationDate:(id *)arg2 creationDateString:(id *)arg3;
+ (id)keyPathsForValuesAffectingIsPhotoStreamPhoto;
+ (id)keyPathsForValuesAffectingGpsCoordinate;
+ (id)keyPathsForValuesAffectingImageSize;
+ (CDStruct_c3b9c2ee)locationFromAVAsset:(id)arg1;
+ (struct CGSize)dimensionsForAVAsset:(id)arg1;
+ (struct CGSize)dimensionsForVideoAtURL:(id)arg1;
+ (id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)pathsForAllIncompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)incompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)_pathsByAssetUUIDFromFetchResults:(id)arg1 absolute:(_Bool)arg2;
+ (id)assetsWithSavedAssetType:(short)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned long long)countUsedAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned long long)countAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2;
+ (void)extractDirectory:(id *)arg1 andFilename:(id *)arg2 fromMainFileURL:(id)arg3;
+ (id)_insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6 isPlaceholder:(_Bool)arg7;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6 isPlaceholder:(_Bool)arg7;
+ (short)_correctedOrientation:(short)arg1;
+ (id)locationFromLocationData:(id)arg1 timestampIfMissing:(id)arg2 outUsesCompactFormat:(_Bool *)arg3;
+ (id)assetWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsWithUUIDs:(id)arg1 includePendingChanges:(_Bool)arg2 inLibrary:(id)arg3;
+ (id)assetsWithUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)_fakeGeo;
+ (id)baseSearchIndexPredicate;
+ (long long)pfAdjustmentsBaseVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (long long)adjustmentBaseVersionFromPFAdjustmentsBaseVersion:(long long)arg1;
+ (id)cloudAssetsInLibrary:(id)arg1;
+ (id)assetsToResetInLibrary:(id)arg1;
+ (id)assetsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)assetsWithCloudAssetUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithCloudAssetUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)createCloudPhotoLibraryAssetWithAssetRecord:(id)arg1 masterRecord:(id)arg2 inLibrary:(id)arg3;
+ (void)markAssetAsRecentlyUsed:(id)arg1;
+ (id)persistedRecentlyUsedGUIDS;
+ (id)recentlyUsedGUIDsPath;
+ (id)sortedCloudSharedAssetsWithPlaceholderKind:(short)arg1 ascending:(_Bool)arg2 inLibrary:(id)arg3;
+ (id)cloudSharedAssetsWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)allCloudSharedAssetsInLibrary:(id)arg1;
@property(nonatomic) _Bool disableFileSystemPersistency; // @synthesize disableFileSystemPersistency=_disableFileSystemPersistency;
@property(nonatomic) _Bool disableDupeAnalysis; // @synthesize disableDupeAnalysis=_disableDupeAnalysis;
@property(nonatomic) _Bool needsMomentUpdate; // @synthesize needsMomentUpdate=_needsMomentUpdate;
@property(retain, nonatomic) NSDictionary *inflightMetadata; // @synthesize inflightMetadata;
@property(retain, nonatomic) UIImage *inflightIndexSheetImage; // @synthesize inflightIndexSheetImage;
@property(retain, nonatomic) NSString *inflightImagePath; // @synthesize inflightImagePath;
@property(retain, nonatomic) UIImage *inflightImageInMemory; // @synthesize inflightImageInMemory;
@property(retain, nonatomic) NSError *cachedNonPersistedVideoPlaybackURLError; // @synthesize cachedNonPersistedVideoPlaybackURLError;
@property(retain, nonatomic) NSDate *cachedNonPersistedVideoPlaybackURLExpiration; // @synthesize cachedNonPersistedVideoPlaybackURLExpiration;
@property(retain, nonatomic) NSURL *cachedNonPersistedVideoPlaybackURL; // @synthesize cachedNonPersistedVideoPlaybackURL;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (long long)compareToAsset:(id)arg1;
- (_Bool)isInterestingForAvalanche;
- (_Bool)visibilityStateIsEqualToState:(short)arg1;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
- (id)globalUUID;
- (id)shortenedFilePath;
@property(readonly, retain, nonatomic) NSURL *assetURL;
- (id)assetURLForSidecarFile:(id)arg1;
- (id)assetURLWithExtension:(id)arg1;
@property(readonly, retain, nonatomic) UIImage *wallpaperFullScreenImage;
@property(readonly, copy, nonatomic) NSString *textBadgeString;
- (id)filteredImage:(id)arg1 withCIContext:(id)arg2;
- (id)pasteBoardRepresentation;
- (id)largestAvailableDataRepresentationAndType:(id *)arg1;
- (void)getLargestAvailableDataRepresentation:(id *)arg1 type:(id *)arg2;
- (id)newLowResolutionFullScreenImage;
- (id)newFullSizeImage;
- (id)newFullScreenImage:(const struct __CFDictionary **)arg1;
- (id)indexSheetImage;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary **)arg2;
- (id)imageWithFormat:(int)arg1;
- (id)pathForDiagnosticFile;
@property(readonly, copy, nonatomic) NSString *pathForLegacySlalomRegionsArchive;
@property(readonly, nonatomic) _Bool isMogul;
@property(readonly, copy, nonatomic) NSString *pathForXMPFile;
@property(readonly, copy, nonatomic) NSURL *fileURLForPrebakedPortraitScrubberThumbnails;
@property(readonly, copy, nonatomic) NSString *pathForPrebakedPortraitScrubberThumbnails;
@property(readonly, copy, nonatomic) NSURL *fileURLForPrebakedLandscapeScrubberThumbnails;
@property(readonly, copy, nonatomic) NSString *pathForPrebakedLandscapeScrubberThumbnails;
- (void)generateLargeThumbnailFileIfNecessary;
- (id)reservedPathForLargeDisplayableImageFileForceLarge:(_Bool)arg1 outImageType:(long long *)arg2;
@property(readonly, copy, nonatomic) NSString *pathForLargeDisplayableImageFile;
@property(readonly, copy, nonatomic) NSString *pathForVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForVideoPreviewFile;
@property(readonly, copy, nonatomic) NSString *pathForTrimmedVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForPrebakedWildcatThumbnailsFile;
- (id)fileURLForFullsizeRenderImage;
@property(readonly, copy, nonatomic) NSURL *fileURLForThumbnailFile;
- (id)fileURLForMetadataWithExtension:(id)arg1;
- (id)pathForMetadataWithExtension:(id)arg1;
@property(readonly, copy, nonatomic) NSString *pathForMetadataDirectory;
@property(readonly, copy, nonatomic) NSString *fileExtension;
@property(readonly, copy, nonatomic) NSArray *allUniformTypeIdentifiers;
- (id)allFileExtensions;
- (id)fileURLForSidecarFile:(id)arg1;
@property(readonly, copy, nonatomic) NSString *pathForOriginalFile;
@property(readonly, copy, nonatomic) NSString *pathForSmallVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForMediumVideoFile;
- (id)fileURLForMediumThumbnailFile;
@property(readonly, copy, nonatomic) NSString *pathForMediumThumbnailFile;
- (id)fileURLForFullsizeRenderVideo;
@property(readonly, copy, nonatomic) NSURL *fileURLForLargeThumbnailFile;
@property(readonly, copy, nonatomic) NSString *pathForLargeThumbnailFile;
- (id)pathForAdjustmentFile;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (id)pathForFullsizeRenderVideoFile;
- (id)pathForFullsizeRenderImageFile;
- (_Bool)_migrateLegacySLMAdjustments;
- (_Bool)migrateLegacyAdjustments;
- (_Bool)_setDefaultSlowMotionAdjustments;
- (_Bool)setDefaultAdjustmentsIfNecessary;
- (void)synchronouslyFetchAdjustmentDataWithCompletionHandler:(id)arg1;
- (void)setAdjustmentDataBlob:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderedContentURL:(id)arg6 penultimateRenderedJPEGData:(id)arg7;
- (_Bool)_isResourceAvailableForResourceType:(unsigned long long)arg1;
- (unsigned long long)CPLResourceTypeFromVideoFormat:(int)arg1 hasAdjustments:(_Bool)arg2;
- (unsigned long long)CPLResourceTypeFromImageFormat:(int)arg1;
@property(readonly, copy, nonatomic) NSSet *allFileURLs;
@property(readonly, copy, nonatomic) NSSet *filePathsWithoutThumbs;
@property(readonly, copy, nonatomic) NSString *pathForAdjustmentDirectory;
- (id)pathForMutationsDirectory;
@property(readonly, copy, nonatomic) NSURL *mainFileURL;
- (_Bool)isSavedPhotosAsset;
- (_Bool)couldBeStoredInDCIM;
- (void)updateAssetKindFromUniformTypeIdentifier;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1;
@property(readonly, nonatomic) _Bool isJPEG;
- (id)mutableSidecarFiles;
@property(readonly, copy, nonatomic) NSArray *sortedSidecarFiles;
- (_Bool)hasJustBeenHidden;
- (_Bool)hasJustBeenShown;
- (_Bool)isIncludedInCloudFeeds;
- (_Bool)isIncludedInMoments;
- (_Bool)isCloudPlaceholder;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool allowsWallpaperEditing;
- (_Bool)isEditable;
@property(readonly, nonatomic) _Bool isAudio;
- (_Bool)_hasPanoramaDimensions;
- (_Bool)isPanorama;
@property(readonly, nonatomic) _Bool isPhoto;
@property(readonly, nonatomic) _Bool isHDVideo;
@property(readonly, nonatomic) _Bool isStreamedVideo;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) id <PLCloudSharedAlbumProtocol> cloudShareAlbum;
@property(readonly, nonatomic) _Bool isCloudPhotoLibraryAsset;
@property(readonly, nonatomic) _Bool isCloudSharedAsset;
@property(readonly, nonatomic) _Bool isUsedByiPhoto;
@property(readonly, nonatomic) _Bool isPhotoStreamPhoto;
@property(nonatomic) CDStruct_c3b9c2ee gpsCoordinate;
- (id)managedAssetForPhotoLibrary:(id)arg1;
@property(nonatomic) struct CGSize imageSize;
- (void)generateAndUpdateThumbnailsWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2 fromImageSource:(struct CGImageSource *)arg3 imageData:(id)arg4 thumbnailDataByFormatID:(struct __CFDictionary *)arg5 updateExistingLargePreview:(_Bool)arg6;
- (_Bool)setVideoInfoFromFileAtURL:(id)arg1 fullSizeRenderURL:(id)arg2 overwriteOriginalProperties:(_Bool)arg3;
- (void)setSavedAssetTypeFromImageProperties:(id)arg1;
- (void)setOriginalSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setHDRFlagFromImageProperties:(id)arg1;
- (void)setThumbnailDataFromImageProperties:(id)arg1;
- (void)setLocationFromImageProperties:(id)arg1;
- (id)pictureTransferProtocolInformationWithAlbumsObjectIDs:(id)arg1;
- (_Bool)setAttributesFromMainFileURL:(id)arg1 fullSizeRenderURL:(id)arg2 savedAssetType:(short)arg3 isPlaceholder:(_Bool)arg4 overwriteOriginalProperties:(_Bool)arg5 imageSource:(struct CGImageSource **)arg6 imageData:(id *)arg7;
- (id)locationFromFileURL:(id)arg1;
- (id)addFaceWithRelativeRect:(struct CGRect)arg1 identifier:(short)arg2 albumUUID:(id)arg3;
- (id)faceWithIdentifier:(short)arg1;
- (void)synchronizeWithPersistedFileSystemAttributes;
- (void)persistMetadataToFilesystem;
- (_Bool)isValidTypeForPersistence;
- (id)_prettyDescription;
- (id)_compactDebugDescription;
- (id)_kindDescription;
- (id)_savedAssetTypeDescription;
- (id)_highDynamicRangeTypeDescription;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (_Bool)_isValidUTI:(id)arg1 forService:(id)arg2;
- (_Bool)_isSavedAssetTypeValid:(short)arg1;
@property(readonly, retain, nonatomic) UIImage *inflightImage;
@property(nonatomic) _Bool isInFlight;
- (id)pathToOriginalVideoFile;
- (_Bool)hasGPS;
@property(retain, nonatomic) PLManagedAsset *originalAsset;
- (id)mutableAlbumsBeingTertiaryKeyAssetFor;
- (id)mutableAlbumsBeingSecondaryKeyAssetFor;
- (id)mutableAlbumsBeingKeyAssetFor;
- (id)adjustmentsXMPRepresentation;
- (void)updateAdjustmentsWithAdjustmentMetadata:(id)arg1;
- (void)updateAdjustmentsWithFiltersAndIdentifiers:(id)arg1;
- (id)_settingsDictionaryFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;
- (id)_settingsDictionaryFromFilter:(id)arg1;
- (id)_serializedPropertyDataFromFilter:(id)arg1;
- (id)addAdjustment;
- (id)mutableAdjustments;
- (_Bool)hasLegacyAdjustments;
- (id)debugFilename;
- (long long)originalImageOrientation;
- (id)assetsLibraryURL;
- (double)aspectRatio;
- (id)pl_photoLibrary;
- (void)didSave;
- (void)willSave;
- (_Bool)validateForUpdate:(id *)arg1;
- (_Bool)validateForInsert:(id *)arg1;
- (void)applyTrashedState:(short)arg1;
- (_Bool)isInTrash;
- (_Bool)canMoveToTrash;
- (void)deleteFromDatabaseOnly;
- (void)delete;
- (_Bool)isDeletableFromAssetsLibrary;
- (_Bool)isEditableFromAssetsLibrary;
- (id)reverseGeoDescription;
- (id)_namingOrderForAssetReverseGeoDescription;
- (id)avalanchePickDescription;
- (_Bool)isAvalanchePhoto;
- (_Bool)isAvalancheStackPhoto;
- (_Bool)avalanchePickTypeIsVisible;
@property(retain, nonatomic) CLLocation *location;
- (void)setLocationFromCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)locationMergedWithAssetMetadataIfCompact:(_Bool)arg1;
- (_Bool)isLocatedAtCoordinates:(CDStruct_c3b9c2ee)arg1;
- (void)prepareForDeletion;
- (_Bool)isFavorite;
- (id)thumbnailIdentifier;
@property unsigned long long effectiveThumbnailIndex;
@property(retain, nonatomic) NSString *customCollectionUUID;
@property(retain, nonatomic) NSString *customCollectionName;
@property(retain, nonatomic) NSString *customMomentUUID;
@property(retain, nonatomic) NSString *customMomentName;
@property(nonatomic) _Bool reverseLocationDataIsValid;
@property(retain, nonatomic) NSData *reverseLocationData;
- (void)didTurnIntoFault;
- (void)willTurnIntoFault;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)dealloc;
- (void)_appendAssetTextDataToSearchContents:(id)arg1 ranges:(id)arg2;
- (void)_appendKeywordsToSearchContents:(id)arg1 ranges:(id)arg2 keywords:(id)arg3;
- (void)_appendDateCreatedToSearchContents:(id)arg1 ranges:(id)arg2;
- (void)_appendGEODataToSearchContents:(id)arg1 ranges:(id)arg2;
- (void)generateSearchIndexContents:(id *)arg1 categoryData:(id *)arg2 keywords:(id)arg3;
- (void)_getSearchIndexContents:(id *)arg1 ranges:(id *)arg2 keywords:(id)arg3;
@property(retain, nonatomic) NSData *searchCategoryData;
@property(nonatomic, setter=setSearchDataValid:) _Bool isSearchDataValid;
- (id)_searchDataCreateIfNeeded;
- (void)writeXMPWithProperties:(id)arg1 orientation:(int)arg2;
- (void)_writeXMPSidecarWithProperties:(id)arg1 orientation:(int)arg2;
- (_Bool)_writeXMPHeaderWithProperties:(id)arg1 orientation:(int)arg2;
- (void)generateRenderFromPhotosAdjustedPhotoWithOriginalFileURL:(id)arg1 renderSize:(struct CGSize)arg2 completionHandler:(id)arg3;
- (void)generateRenderFromiPhotosAdjustedPhotoWithOriginalFileURL:(id)arg1 renderSize:(struct CGSize)arg2 completionHandler:(id)arg3;
- (void)generateThumbnailsWithImageSource:(struct CGImageSource *)arg1 imageData:(id)arg2 updateExistingLargePreview:(_Bool)arg3 allowMediumPreview:(_Bool)arg4 outSmallThumbnail:(id *)arg5 outLargeThumbnail:(id *)arg6;
- (void)_computePreCropThumbnailSize:(struct CGSize *)arg1 andPostCropSize:(struct CGSize *)arg2 forOrientedOriginalSize:(struct CGSize)arg3 andCroppedSize:(struct CGSize)arg4 isLargeThumbnail:(_Bool)arg5;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *longDescription;
@property(nonatomic) int locationHash;
@property(nonatomic) short embeddedThumbnailHeight;
@property(nonatomic) short embeddedThumbnailWidth;
@property(nonatomic) int embeddedThumbnailLength;
@property(nonatomic) int embeddedThumbnailOffset;
@property(readonly, retain, nonatomic) NSData *embeddedThumbnailData;
@property(readonly, nonatomic) _Bool hasEmbeddedThumbnail;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSString *originalPath;
@property(nonatomic) int originalFilesize;
@property(nonatomic) short originalOrientation;
@property(retain, nonatomic) NSString *originalFilename;
@property(nonatomic) long long externalUsageIntent;
@property(retain, nonatomic) NSString *publicGlobalUUID;
@property(retain, nonatomic) NSData *originalHash;
@property(nonatomic) short originalWidth;
@property(nonatomic) short originalHeight;
@property(retain, nonatomic) NSString *originalAssetsUUID;
@property(retain, nonatomic) NSString *editorBundleID;
@property(retain, nonatomic) NSString *creatorBundleID;
- (_Bool)canGenerateDerivatives;
- (_Bool)supportsCloudUpload;
- (id)cplResourceForResourceType:(unsigned long long)arg1;
- (id)cloudResourceForResourceType:(unsigned long long)arg1;
- (id)utiForResourceType:(unsigned long long)arg1;
- (void)updateAssetAlbumRelation:(id)arg1 inLibrary:(id)arg2;
- (long long)orderInAlbumCloudUuid:(id)arg1 fromRelations:(id)arg2;
- (void)applyResourcesFromAssetChange:(id)arg1;
- (void)markCloudResourceOfType:(unsigned long long)arg1 asLocallyAvailable:(_Bool)arg2;
- (unsigned long long)_cplAdjustmentSourceTypeFromPLAdjustmentBaseVersion:(long long)arg1;
- (long long)_plAdjustmentBaseVersionFromCPLAdjustmentSourceType:(unsigned long long)arg1;
- (void)applyPropertiesFromAssetChange:(id)arg1;
- (_Bool)_location:(id)arg1 isEqualToLocationForUpdating:(id)arg2;
- (void)_applyPropertiesFromCloudMaster:(id)arg1;
- (void)_createCloudMasterFromMasterChange:(id)arg1;
- (void)applyResourcesFromMasterChange:(id)arg1;
- (struct CGSize)_targetSizeForInputSize:(struct CGSize)arg1 maxPixelSize:(unsigned long long)arg2;
- (id)cplRelationsForAsset;
- (unsigned long long)_cplAssetSubtypeFromPLAssetSubtype:(short)arg1;
- (short)_plAssetSubtypeFromCPLAssetSubtype:(unsigned long long)arg1;
- (int)_avalancheTypeFromCplBurstFlags:(unsigned long long)arg1;
- (unsigned long long)_cplBurstFlagsForAsset;
- (id)cplAssetChangeWithMasterID:(id)arg1 withChangeType:(unsigned long long)arg2;
- (void)applyResourceChangeToCPLAsset:(id)arg1 withIdentifier:(id)arg2 forChangeType:(unsigned long long)arg3;
- (void)applyPropertiesChangeToCPLAssetChange:(id)arg1 withMasterID:(id)arg2;
- (id)_createVideoResourceFromVideoURL:(id)arg1 withResourceType:(unsigned long long)arg2 itemIdentifier:(id)arg3 applyVideoAdjustments:(_Bool)arg4;
- (id)_fileNameFormatForResourceType:(unsigned long long)arg1;
- (id)_createCPLResourceFromImagePath:(id)arg1 withResourceType:(unsigned long long)arg2 imageSize:(struct CGSize)arg3 itemIdentifier:(id)arg4;
- (id)_createImageResourceForResourceType:(unsigned long long)arg1 withPreviewImagePath:(id)arg2 itemIdentifier:(id)arg3;
- (struct CGSize)_sizeOfImageAtURL:(id)arg1;
- (id)_itemIdentifier;
- (id)_generatePosterFrameForVideoAtURL:(id)arg1 withResourceType:(unsigned long long)arg2 itemIdentifier:(id)arg3;
- (id)cplMasterChange;
- (id)existingCloudMaster;
@property(retain, nonatomic) NSSet *cloudResources;
@property(nonatomic) _Bool userCloudSharedLiked;
- (void)userReadAllCloudSharedComments;
- (void)userDeleteCloudSharedComment:(id)arg1;
- (id)userAddCloudSharedCommentWithText:(id)arg1;
- (_Bool)cloudHasSameOwnerAsAsset:(id)arg1;
- (int)cloudCommentsStatusForOwnedAsset:(_Bool)arg1;
- (void)deleteComment:(id)arg1;
- (void)addComment:(id)arg1;
@property(readonly, nonatomic) unsigned long long totalCommentsCount;
@property(readonly, nonatomic) NSString *cloudOwnerFullName;
@property(readonly, nonatomic) NSString *cloudOwnerLastName;
@property(readonly, nonatomic) NSString *cloudOwnerFirstName;
@property(readonly, nonatomic) NSString *cloudOwnerEmail;

// Remaining properties
@property(retain, nonatomic) NSDate *addedDate; // @dynamic addedDate;
@property(retain, nonatomic) PLAdditionalAssetAttributes *additionalAttributes; // @dynamic additionalAttributes;
@property(retain, nonatomic) NSOrderedSet *adjustments; // @dynamic adjustments;
@property(retain, nonatomic) NSSet *albumOrders; // @dynamic albumOrders;
@property(retain, nonatomic) NSSet *albums; // @dynamic albums;
@property(retain, nonatomic) NSSet *albumsBeingKeyAssetFor; // @dynamic albumsBeingKeyAssetFor;
@property(retain, nonatomic) NSSet *albumsBeingSecondaryKeyAssetFor; // @dynamic albumsBeingSecondaryKeyAssetFor;
@property(retain, nonatomic) NSSet *albumsBeingTertiaryKeyAssetFor; // @dynamic albumsBeingTertiaryKeyAssetFor;
@property(nonatomic) int avalanchePickType; // @dynamic avalanchePickType;
@property(retain, nonatomic) NSString *avalancheUUID; // @dynamic avalancheUUID;
@property(readonly, retain, nonatomic) NSString *cloudAssetGUID;
@property(retain, nonatomic) NSString *cloudBatchID; // @dynamic cloudBatchID;
@property(retain, nonatomic) NSDate *cloudBatchPublishDate; // @dynamic cloudBatchPublishDate;
@property(retain, nonatomic) NSString *cloudCollectionGUID; // @dynamic cloudCollectionGUID;
@property(retain, nonatomic) NSOrderedSet *cloudComments; // @dynamic cloudComments;
@property(retain, nonatomic) NSNumber *cloudDownloadRequests; // @dynamic cloudDownloadRequests;
@property(retain, nonatomic) PLCloudFeedAssetsEntry *cloudFeedAssetsEntry; // @dynamic cloudFeedAssetsEntry;
@property(nonatomic) _Bool cloudHasCommentsByMe; // @dynamic cloudHasCommentsByMe;
@property(nonatomic) _Bool cloudHasCommentsConversation; // @dynamic cloudHasCommentsConversation;
@property(nonatomic) _Bool cloudHasUnseenComments; // @dynamic cloudHasUnseenComments;
@property(nonatomic) _Bool cloudIsDeletable; // @dynamic cloudIsDeletable;
@property(nonatomic) _Bool cloudIsMyAsset; // @dynamic cloudIsMyAsset;
@property(retain, nonatomic) NSDate *cloudLastViewedCommentDate; // @dynamic cloudLastViewedCommentDate;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(retain, nonatomic) NSString *cloudOwnerHashedPersonID; // @dynamic cloudOwnerHashedPersonID;
@property(nonatomic) short cloudPlaceholderKind; // @dynamic cloudPlaceholderKind;
@property(retain, nonatomic) NSDate *cloudServerPublishDate; // @dynamic cloudServerPublishDate;
@property(nonatomic) short cloudServerState; // @dynamic cloudServerState;
@property(nonatomic) _Bool complete; // @dynamic complete;
@property(retain, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;
@property(retain, nonatomic) NSString *directory; // @dynamic directory;
@property(nonatomic) double duration; // @dynamic duration;
@property(retain, nonatomic) NSSet *faces; // @dynamic faces;
@property(nonatomic) _Bool favorite; // @dynamic favorite;
@property(retain, nonatomic) NSString *filename; // @dynamic filename;
@property(nonatomic) _Bool hasAdjustments; // @dynamic hasAdjustments;
@property(nonatomic) short height; // @dynamic height;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(nonatomic) short highDynamicRangeType; // @dynamic highDynamicRangeType;
@property(nonatomic) short kind; // @dynamic kind;
@property(nonatomic) short kindSubtype; // @dynamic kindSubtype;
@property(retain, nonatomic) NSDate *lastSharedDate; // @dynamic lastSharedDate;
@property(retain, nonatomic) NSOrderedSet *likeComments; // @dynamic likeComments;
@property(retain, nonatomic) NSData *locationData; // @dynamic locationData;
@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) PLMoment *moment; // @dynamic moment;
@property(nonatomic) short orientation; // @dynamic orientation;
@property(nonatomic) short savedAssetType; // @dynamic savedAssetType;
@property(retain, nonatomic) NSManagedObject *searchData; // @dynamic searchData;
@property(retain, nonatomic) NSSet *sidecarFiles; // @dynamic sidecarFiles;
@property(nonatomic) double sortToken; // @dynamic sortToken;
@property(nonatomic) int thumbnailIndex; // @dynamic thumbnailIndex;
@property(retain, nonatomic) NSDate *trashedDate; // @dynamic trashedDate;
@property(nonatomic) short trashedState; // @dynamic trashedState;
@property(retain, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;
@property(retain, nonatomic) id uuid; // @dynamic uuid;
@property(nonatomic) short visibilityState; // @dynamic visibilityState;
@property(nonatomic) short width; // @dynamic width;

@end
