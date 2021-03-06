/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUAlbumListViewController.h>

@class NSArray, UIBarButtonItem;

@interface PUUIAlbumListViewController : PUAlbumListViewController
{
    UIBarButtonItem *_imagePickerCancelButton;
    NSArray *__imagePickerMediaTypes;
}

@property(copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes; // @synthesize _imagePickerMediaTypes=__imagePickerMediaTypes;
- (void).cxx_destruct;
- (_Bool)pu_wantsNavigationBarVisible;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)newGridViewControllerForAllPhotos;
- (_Bool)shouldShowAllPhotosItem;
- (_Bool)shouldAllowEmailInAlbumSubtitle;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForFolder:(id)arg1;
- (void)setAlbumList:(id)arg1;
- (void)_handleImagePickerCancel:(id)arg1;
- (void)_setAlbumList:(struct NSObject *)arg1 mediaTypes:(id)arg2;
- (int)_defaultAlbumListFilter;
- (id)init;

@end

