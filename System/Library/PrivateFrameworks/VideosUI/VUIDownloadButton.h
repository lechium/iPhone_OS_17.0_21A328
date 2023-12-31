//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, UIColor, UIImage, UIImageSymbolConfiguration, UIView, UIViewController, VUICircularProgress, VUIDownloadButtonActionHandler, VUIDownloadButtonViewModel, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDownloadButton
{
    _Bool _showsTextInDownloadedState;	// 8 = 0x8
    _Bool _usesDefaultConfiguration;	// 9 = 0x9
    _Bool _observingDownloadProgress;	// 10 = 0xa
    _Bool _wasDeleted;	// 11 = 0xb
    _Bool _wasCanceled;	// 12 = 0xc
    _Bool _isForLibrary;	// 13 = 0xd
    UIViewController *_presentingViewController;	// 16 = 0x10
    CDUnknownBlockType _downloadStateChangeHandler;	// 24 = 0x18
    UIImage *_notDownloadedImage;	// 32 = 0x20
    UIImage *_connectingImage;	// 40 = 0x28
    UIImage *_downloadingImage;	// 48 = 0x30
    UIImage *_downloadedImage;	// 56 = 0x38
    UIImage *_expiredDownloadImage;	// 64 = 0x40
    VUIDownloadButtonViewModel *_viewModel;	// 72 = 0x48
    VUICircularProgress *_progressIndicator;	// 80 = 0x50
    VUITextLayout *_textLayout;	// 88 = 0x58
    UIImageSymbolConfiguration *_primarySymbolConfiguration;	// 96 = 0x60
    VUIDownloadButtonActionHandler *_actionHandler;	// 104 = 0x68
    UIView *_backgroundView;	// 112 = 0x70
    UIColor *_keyBackgroundColor;	// 120 = 0x78
    UIColor *_saturatedTintColor;	// 128 = 0x80
    CAShapeLayer *_backgroundMaskingLayer;	// 136 = 0x88
    CAShapeLayer *_backdropMaskingLayer;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000319a16
@property(retain, nonatomic) CAShapeLayer *backdropMaskingLayer; // @synthesize backdropMaskingLayer=_backdropMaskingLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundMaskingLayer; // @synthesize backgroundMaskingLayer=_backgroundMaskingLayer;
@property(retain, nonatomic) UIColor *saturatedTintColor; // @synthesize saturatedTintColor=_saturatedTintColor;
@property(retain, nonatomic) UIColor *keyBackgroundColor; // @synthesize keyBackgroundColor=_keyBackgroundColor;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) VUIDownloadButtonActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) UIImageSymbolConfiguration *primarySymbolConfiguration; // @synthesize primarySymbolConfiguration=_primarySymbolConfiguration;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(nonatomic) _Bool isForLibrary; // @synthesize isForLibrary=_isForLibrary;
@property(nonatomic) _Bool wasCanceled; // @synthesize wasCanceled=_wasCanceled;
@property(nonatomic) _Bool wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property(nonatomic) _Bool observingDownloadProgress; // @synthesize observingDownloadProgress=_observingDownloadProgress;
@property(retain, nonatomic) VUICircularProgress *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) VUIDownloadButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImage *expiredDownloadImage; // @synthesize expiredDownloadImage=_expiredDownloadImage;
@property(retain, nonatomic) UIImage *downloadedImage; // @synthesize downloadedImage=_downloadedImage;
@property(retain, nonatomic) UIImage *downloadingImage; // @synthesize downloadingImage=_downloadingImage;
@property(retain, nonatomic) UIImage *connectingImage; // @synthesize connectingImage=_connectingImage;
@property(retain, nonatomic) UIImage *notDownloadedImage; // @synthesize notDownloadedImage=_notDownloadedImage;
@property(copy, nonatomic) CDUnknownBlockType downloadStateChangeHandler; // @synthesize downloadStateChangeHandler=_downloadStateChangeHandler;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) _Bool usesDefaultConfiguration; // @synthesize usesDefaultConfiguration=_usesDefaultConfiguration;
@property(nonatomic) _Bool showsTextInDownloadedState; // @synthesize showsTextInDownloadedState=_showsTextInDownloadedState;
- (void)_stopObservingDownloadProgress:(id)arg1;	// IMP=0x00000000003196b0
- (void)_startObservingDownloadProgress:(id)arg1;	// IMP=0x0000000000319633
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x00000000003195ba
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x0000000000319535
- (void)_configureProgressIndicatorWithProperties:(id)arg1;	// IMP=0x00000000003192a2
- (void)_insertProgressIndicatorWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000319148
- (id)_buttonPropertiesForState:(unsigned long long)arg1 isExpired:(_Bool)arg2 isExpiringSoon:(_Bool)arg3 hasFailed:(_Bool)arg4;	// IMP=0x0000000000318e52
- (void)_updateDownloadProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000318dcc
- (void)_updateImageViewTintColorWithDownloadState:(unsigned long long)arg1;	// IMP=0x0000000000318d5c
- (void)_updateButtonToDownloadedWithProperties:(id)arg1;	// IMP=0x0000000000318b1d
- (void)_updateButtonToDownloadingWithProperties:(id)arg1;	// IMP=0x000000000031899d
- (void)_updateButtonToConnectingWithProperties:(id)arg1;	// IMP=0x0000000000318829
- (void)_updateButtonToNotDownloadedWithProperties:(id)arg1;	// IMP=0x0000000000318717
- (void)_updateButtonToState:(unsigned long long)arg1 isExpired:(_Bool)arg2 isExpiringSoon:(_Bool)arg3 hasFailed:(_Bool)arg4;	// IMP=0x000000000031867f
- (void)_updateButtonToState:(unsigned long long)arg1 oldState:(unsigned long long)arg2;	// IMP=0x000000000031842e
- (id)_imageForDownloadState:(unsigned long long)arg1 isExpired:(_Bool)arg2 isExpiringSoon:(_Bool)arg3 hasFailed:(_Bool)arg4;	// IMP=0x0000000000318383
- (id)_expiredDownloadImage;	// IMP=0x0000000000318223
- (id)_pausedImage;	// IMP=0x000000000031821b
- (id)_downloadedImage;	// IMP=0x00000000003180db
- (id)_downloadingImage;	// IMP=0x00000000003180d3
- (id)_connectingImage;	// IMP=0x00000000003180cb
- (id)_notDownloadedImage;	// IMP=0x0000000000317f69
- (void)_setImage:(id)arg1;	// IMP=0x0000000000317e89
- (void)_setTitleWithProperties:(id)arg1;	// IMP=0x0000000000317c69
- (void)_layoutProgressIndicator;	// IMP=0x0000000000317be3
- (void)_clearMasks;	// IMP=0x0000000000317b1c
- (void)_updateMaskForProgressLayer;	// IMP=0x000000000031785a
- (void)_setupDownloadButton;	// IMP=0x0000000000317701
- (struct CGSize)_imageSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003175fe
- (void)setScrolledNonUberPercentage:(double)arg1;	// IMP=0x0000000000317575
- (void)updateWithPlayable:(id)arg1 textLayout:(id)arg2;	// IMP=0x0000000000317522
- (void)updateWithAssetController:(id)arg1;	// IMP=0x00000000003174b9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000316f5b
- (void)vui_didMoveToWindow;	// IMP=0x0000000000316eab
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000316cba
- (void)revertTintColor;	// IMP=0x0000000000316bfe
- (void)saturateTintColorAndBackgroundColor;	// IMP=0x0000000000316b46
- (void)setTintColor:(id)arg1;	// IMP=0x0000000000316aa7
- (void)configureWithLayoutProperties;	// IMP=0x00000000003168b4
- (void)configureActionHandler;	// IMP=0x00000000003166b6
- (void)dealloc;	// IMP=0x00000000003163f1
- (id)initWithMediaEntity:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000316341
- (id)initWithAssetController:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000003162e2
- (id)initWithDownloadButtonViewModel:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000316143
- (id)initWithPlayable:(id)arg1 type:(unsigned long long)arg2 textLayout:(id)arg3;	// IMP=0x0000000000315f60

@end

