//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/QLPreviewController.h>

@class ARQuickLookPreviewItem, ARQuickLookWebKitItem;

__attribute__((visibility("hidden")))
@interface VUIARQLPreviewController : QLPreviewController
{
    ARQuickLookWebKitItem *_quickLookWebKitItem;	// 8 = 0x8
    ARQuickLookPreviewItem *_quickLookPreviewItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000024898c
@property(retain, nonatomic) ARQuickLookPreviewItem *quickLookPreviewItem; // @synthesize quickLookPreviewItem=_quickLookPreviewItem;
@property(retain, nonatomic) ARQuickLookWebKitItem *quickLookWebKitItem; // @synthesize quickLookWebKitItem=_quickLookWebKitItem;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x0000000000248891
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x0000000000248886
- (void)_commonInit;	// IMP=0x0000000000248871
- (id)initWithQuickLookWebKitItem:(id)arg1;	// IMP=0x00000000002487f4
- (id)initWithQuickLookPreviewItem:(id)arg1;	// IMP=0x0000000000248777

@end

