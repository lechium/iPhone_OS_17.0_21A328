//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PXImportItemViewModel, UIActivityIndicatorView;
@protocol PUImportOneUpScrubberCellDisplayDelegate;

__attribute__((visibility("hidden")))
@interface PUImportOneUpScrubberCell
{
    _Bool _selectable;	// 8 = 0x8
    _Bool _needsBadgeUpdate;	// 9 = 0x9
    id <PUImportOneUpScrubberCellDisplayDelegate> _displayDelegate;	// 16 = 0x10
    PXImportItemViewModel *_importItem;	// 24 = 0x18
    long long _badgeType;	// 32 = 0x20
    UIActivityIndicatorView *_spinner;	// 40 = 0x28
    long long _thumbnailRequestID;	// 48 = 0x30
}

+ (id)emptyThumbnailBackgroundColor;	// IMP=0x001000000028f5ad
- (void).cxx_destruct;	// IMP=0x000000000028f49d
@property(nonatomic) long long thumbnailRequestID; // @synthesize thumbnailRequestID=_thumbnailRequestID;
@property(nonatomic) _Bool needsBadgeUpdate; // @synthesize needsBadgeUpdate=_needsBadgeUpdate;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property(retain, nonatomic) PXImportItemViewModel *importItem; // @synthesize importItem=_importItem;
@property(nonatomic) __weak id <PUImportOneUpScrubberCellDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000028f21b
- (void)_createSpinnerIfNecessary;	// IMP=0x000000000028f0d2
- (void)updateToThumbnail:(id)arg1;	// IMP=0x000000000028f02f
- (void)refreshThumbnail;	// IMP=0x000000000028ee60
- (void)updateBadgeUIIfNeeded;	// IMP=0x000000000028eccb
- (void)prepareForReuse;	// IMP=0x000000000028eac3
- (void)layoutSubviews;	// IMP=0x000000000028ea19
- (void)dealloc;	// IMP=0x000000000028e95f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000028e901
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000028e892
- (void)_commonPUImportOneUpScrubberCellInitialization;	// IMP=0x000000000028e851

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

