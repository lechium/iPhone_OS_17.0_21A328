//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSExtension, NSMutableArray, NSString, SKProductPageRemoteViewController, SKRemoteProductViewController, SKStoreProductViewController, ServiceCardContainerViewController, _UIResilientRemoteViewContainerViewController;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface SKProductRemoteViewTask : NSObject
{
    _Bool _isClientEntitled;	// 8 = 0x8
    _Bool _isAskToBuy;	// 9 = 0x9
    NSString *_extensionID;	// 16 = 0x10
    _Bool _isFetchingExtension;	// 24 = 0x18
    _Bool _isPreview;	// 25 = 0x19
    _Bool _didLoad;	// 26 = 0x1a
    _Bool _visibleInClientWindow;	// 27 = 0x1b
    NSString *_logKey;	// 32 = 0x20
    NSString *_hostApplicationOverride;	// 40 = 0x28
    NSDictionary *_cachedParameters;	// 48 = 0x30
    NSDictionary *_lookupResult;	// 56 = 0x38
    NSError *_lookupError;	// 64 = 0x40
    NSExtension *_productPageExtension;	// 72 = 0x48
    id <NSCopying> _extensionRequest;	// 80 = 0x50
    NSMutableArray *_entitledConfigurationActions;	// 88 = 0x58
    NSMutableArray *_configurationActions;	// 96 = 0x60
    _UIResilientRemoteViewContainerViewController *_extensionRemoteContainerViewController;	// 104 = 0x68
    SKProductPageRemoteViewController *_extensionRemoteViewController;	// 112 = 0x70
    ServiceCardContainerViewController *_extensionRemoteCardContainerViewController;	// 120 = 0x78
    SKRemoteProductViewController *_uiServiceRemoteViewController;	// 128 = 0x80
    SKStoreProductViewController *_storeController;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000003eb6a
- (void)finishImmediately;	// IMP=0x000000000003eaea
- (void)setAskToBuy:(_Bool)arg1;	// IMP=0x000000000003e92f
- (void)setUsageContext:(id)arg1;	// IMP=0x000000000003e786
- (void)setScriptContextDictionary:(id)arg1;	// IMP=0x000000000003e5dd
- (void)setShowsStoreButton:(id)arg1;	// IMP=0x000000000003e41d
- (void)setProductPageStyle:(id)arg1;	// IMP=0x000000000003e274
- (void)setPromptString:(id)arg1;	// IMP=0x000000000003e0cb
- (void)setShowsRightBarButton:(_Bool)arg1;	// IMP=0x000000000003df12
- (void)setRightBarButtonTitle:(id)arg1;	// IMP=0x000000000003dd69
- (void)setCancelButtonTitle:(id)arg1;	// IMP=0x000000000003dbc0
- (id)_hostApplicationIdentifier;	// IMP=0x000000000003db51
- (void)setHostBundleIdentifier:(id)arg1;	// IMP=0x000000000003db40
- (void)setClientIdentifier:(id)arg1;	// IMP=0x000000000003d997
- (void)setAffiliateIdentifier:(id)arg1;	// IMP=0x000000000003d7ee
- (void)setAdditionalBuyParameters:(id)arg1;	// IMP=0x000000000003d645
- (void)loadProductWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d094
- (void)loadProductWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d005
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003cf76
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000003cf5f
- (void)productPageRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;	// IMP=0x000000000003ceb8
- (void)productPageRemoteViewControllerLoadDidFinish:(id)arg1;	// IMP=0x000000000003cda1
- (void)productPageRemoteViewController:(id)arg1 finishWithResult:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ccb1
- (void)_finishWithResult:(long long)arg1;	// IMP=0x000000000003caef
- (id)_productIDFromParameters:(id)arg1;	// IMP=0x000000000003c991
- (id)_keyProfileForProductLookup;	// IMP=0x000000000003c975
- (void)_killExtensionIfNecessary;	// IMP=0x000000000003c8b2
- (void)_showExtensionFromUIService;	// IMP=0x000000000003c6bb
- (void)_didReceiveExtensionRemoteViewController:(id)arg1;	// IMP=0x000000000003c392
- (void)_showExtensionWithID:(id)arg1;	// IMP=0x000000000003be42
- (void)_addChildController:(id)arg1 toController:(id)arg2;	// IMP=0x000000000003bcc0
- (void)_loadUIServiceIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b771
- (void)_showErrorController;	// IMP=0x000000000003b6ae
- (_Bool)_isProductUnavailableError:(id)arg1;	// IMP=0x000000000003b618
- (_Bool)_isViewControllerDescendant:(id)arg1 ofViewController:(id)arg2;	// IMP=0x000000000003b561
- (void)_showExtensionIfNeeded;	// IMP=0x000000000003b403
- (void)_executeConfigurationActionsForExtension:(id)arg1;	// IMP=0x000000000003b18a
- (void)_executeConfigurationActionsForUIService:(id)arg1;	// IMP=0x000000000003af2f
- (void)_addConfigurationAction:(CDUnknownBlockType)arg1 needsEntitlement:(_Bool)arg2;	// IMP=0x000000000003acbf
- (void)setVisibleInClientWindow:(id)arg1;	// IMP=0x000000000003abad
- (void)setPreview:(id)arg1;	// IMP=0x000000000003a9e0
- (void)setPresentationStyle:(id)arg1;	// IMP=0x000000000003a92d
- (void)storeProductViewControllerDidAppear;	// IMP=0x000000000003a91b
- (void)storeProductViewControllerWillAppear;	// IMP=0x000000000003a909
- (void)lookupProductWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a441
- (void)dealloc;	// IMP=0x000000000003a363
- (id)initWithStoreController:(id)arg1;	// IMP=0x000000000003a145

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
