//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsPieProgressView, NSString, UGCARPPhotoCarouselViewModel, UIImageView, UIView;

@interface UGCPhotoThumbnailCheckmarkCollectionViewCell
{
    UIImageView *_checkmarkImageView;	// 8 = 0x8
    MapsPieProgressView *_progressView;	// 16 = 0x10
    UIView *_backgroundViewForProgressView;	// 24 = 0x18
    UGCARPPhotoCarouselViewModel *_viewModel;	// 32 = 0x20
    _Bool _checked;	// 40 = 0x28
    _Bool _enabled;	// 41 = 0x29
    _Bool _isLoading;	// 42 = 0x2a
    NSString *_identifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000030fc99
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_updateEnableStatus;	// IMP=0x001000000030fbdf
- (void)_updateCheckmarkImageView;	// IMP=0x001000000030fa1b
- (void)_updateLoadingState;	// IMP=0x001000000030f910
- (void)setLoadingProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000030f8f3
- (void)prepareForReuse;	// IMP=0x001000000030f7ed
- (void)_setupSubview;	// IMP=0x001000000030ec16
@property(retain, nonatomic) UGCARPPhotoCarouselViewModel *viewModel;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000030eb05

@end
