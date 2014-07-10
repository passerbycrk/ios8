/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WKActionSheetDelegate-Protocol.h"

@class WKContentView;

// Not exported
@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate>
{
    struct RetainPtr<WKActionSheet> _interactionSheet;
    struct RetainPtr<_WKActivatedElementInfo> _elementInfo;
    struct RetainPtr<NSArray> _elementActions;
    WKContentView *_view;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cleanupSheet;
- (void)showDataDetectorsSheet;
- (void)showLinkSheet;
- (void)showImageSheet;
- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(_Bool)arg2;
- (void)updateSheetPosition;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)presentSheet;
- (struct CGRect)presentationRectInHostViewForSheet;
- (struct CGRect)initialPresentationRectInHostViewForSheet;
- (id)hostViewForSheet;
- (struct CGRect)_presentationRectForSheetGivenPoint:(struct CGPoint)arg1 inHostView:(id)arg2;
- (id)superviewForSheet;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end
