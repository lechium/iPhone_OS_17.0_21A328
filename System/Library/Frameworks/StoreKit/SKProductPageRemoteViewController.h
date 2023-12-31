//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString;
@protocol SKProductPageRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKProductPageRemoteViewController : _UIRemoteViewController
{
    id <SKProductPageRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x00100000000075e6
+ (id)exportedInterface;	// IMP=0x00100000000075cd
- (void).cxx_destruct;	// IMP=0x0000000000007c00
@property(nonatomic) __weak id <SKProductPageRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)extensionProxy;	// IMP=0x0000000000007bc1
- (void)setScriptContextDictionary:(id)arg1;	// IMP=0x0000000000007bbb
- (void)setProductPageStyle:(id)arg1;	// IMP=0x0000000000007bb5
- (void)finishStarRatingPromptWithRating:(id)arg1;	// IMP=0x0000000000007baf
- (void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;	// IMP=0x0000000000007b38
- (void)setPreview:(id)arg1;	// IMP=0x0000000000007acf
- (void)setClientIdentifier:(id)arg1;	// IMP=0x0000000000007ac9
- (void)setAffiliateIdentifier:(id)arg1;	// IMP=0x0000000000007ac3
- (void)setAdditionalBuyParameters:(id)arg1;	// IMP=0x0000000000007abd
- (void)loadProductWithURL:(id)arg1;	// IMP=0x0000000000007ab7
- (void)loadProductWithRequest:(id)arg1;	// IMP=0x0000000000007ab1
- (void)loadProductWithPageDictionary:(id)arg1;	// IMP=0x0000000000007aab
- (void)finishImmediately;	// IMP=0x0000000000007a5a
- (void)setVisibleInClientWindow:(id)arg1;	// IMP=0x00000000000079f1
- (void)setUsageContext:(id)arg1;	// IMP=0x0000000000007988
- (void)setAskToBuy:(_Bool)arg1;	// IMP=0x000000000000793e
- (void)setPromptString:(id)arg1;	// IMP=0x00000000000078d5
- (void)setShowsRightBarButton:(_Bool)arg1;	// IMP=0x000000000000788b
- (void)setRightBarButtonTitle:(id)arg1;	// IMP=0x0000000000007822
- (void)setCancelButtonTitle:(id)arg1;	// IMP=0x00000000000077b9
- (void)setShowsStoreButton:(_Bool)arg1;	// IMP=0x000000000000776f
- (void)loadDidFinish;	// IMP=0x0000000000007723
- (void)finishWithResult:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000076a9
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000000075ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

