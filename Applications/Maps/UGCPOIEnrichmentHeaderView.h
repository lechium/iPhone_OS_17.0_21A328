//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MKMapItem, NSURL, UIImageView, UILabel;

@interface UGCPOIEnrichmentHeaderView : UIView
{
    UIImageView *_headerImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_secondaryLabel;	// 24 = 0x18
    NSURL *_brandIconURL;	// 32 = 0x20
    _Bool _isDownloadingBrandIcon;	// 40 = 0x28
    _Bool _hideSummaryText;	// 41 = 0x29
    MKMapItem *_mapItem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000af7ece
@property(nonatomic) _Bool hideSummaryText; // @synthesize hideSummaryText=_hideSummaryText;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)_setBrandIcon:(id)arg1 fallbackToMapItemIcon:(_Bool)arg2;	// IMP=0x0010000000af7dc9
- (void)_startBrandIconDownload;	// IMP=0x0010000000af7c03
- (void)_cancelBrandIconDownload;	// IMP=0x0010000000af7b88
- (void)_updateIcon;	// IMP=0x0010000000af7a74
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000af79ab
- (void)layoutSubviews;	// IMP=0x0010000000af7904
- (void)_refreshContent;	// IMP=0x0010000000af781b
- (void)_setupConstraints;	// IMP=0x0010000000af759f
- (void)_setupSubviews;	// IMP=0x0010000000af731b
- (void)dealloc;	// IMP=0x0010000000af72dd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000af7257

@end

