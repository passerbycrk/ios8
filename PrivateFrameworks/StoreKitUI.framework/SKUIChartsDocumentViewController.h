/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIDocumentViewController-Protocol.h"

@class NSMutableArray, SKUIChartColumnsView, SKUIChartsTemplateViewElement;

@interface SKUIChartsDocumentViewController : SKUIViewController <SKUIDocumentViewController>
{
    SKUIChartColumnsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUIChartsTemplateViewElement *_templateElement;
}

- (void).cxx_destruct;
- (long long)_visibleColumnCountForWidth:(double)arg1;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (id)_columnViewControllers;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)contentScrollView;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;

@end
