/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PUPhotoEditToolControllerDelegate <NSObject>
- (void)toolControllerDidFinish:(id)arg1;
- (id)toolControllerUneditedCIImage:(id)arg1;
- (id)toolControllerUneditedImage:(id)arg1;
- (id)toolControllerImageScrollView:(id)arg1;
- (id)toolControllerPreviewView:(id)arg1;
- (id)toolControllerMainRenderer:(id)arg1;
- (id)toolControllerMainContainerView:(id)arg1;
- (id)toolControllerUneditedPhotoEditModel:(id)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg1;
- (void)toolController:(id)arg1 didChangePreferredPreviewViewInsetsAnimated:(_Bool)arg2;
- (void)toolControllerDidChangePreferredRenderMode:(id)arg1;
- (void)toolController:(id)arg1 updateModelDependentControlsAnimated:(_Bool)arg2;
@end

