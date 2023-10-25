//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PKPassLibrary;
@protocol OS_dispatch_queue, TransitPassManagerDelegate;

@interface TransitPassManager : NSObject
{
    NSObject<OS_dispatch_queue> *_libraryQueue;	// 8 = 0x8
    PKPassLibrary *_libraryToNotUseDirectly;	// 16 = 0x10
    _Bool _isTourist;	// 24 = 0x18
    NSMutableDictionary *_allAvailablePasses;	// 32 = 0x20
    id <TransitPassManagerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000008207d2
@property(nonatomic) __weak id <TransitPassManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;	// IMP=0x001000000082075f
- (id)currencyAmountForRoute:(id)arg1;	// IMP=0x00100000008201b9
- (id)transitSystemsForRoute:(id)arg1 withSupportedPaymentMethods:(id)arg2;	// IMP=0x001000000081fbab
- (void)_passKitLibraryMayHaveChanged;	// IMP=0x001000000081fb5f
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x001000000081fb4d
- (void)_passKitLibraryDidChange:(id)arg1;	// IMP=0x001000000081fad1
- (id)_passForTopUpWithTransitPasses:(id)arg1 forRouteTNIs:(id)arg2 routeCost:(id)arg3;	// IMP=0x001000000081e809
- (void)fetchTransitMessageForRoute:(id)arg1 paymentMethods:(id)arg2 suggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000081df2b
- (void)_fetchAllAvailablePassesFromWallet;	// IMP=0x001000000081d9f2
- (id)_identifiersForSecurePasses:(id)arg1;	// IMP=0x001000000081d154
- (id)_userTransitPassesFromLibrary:(id)arg1;	// IMP=0x001000000081cdbb
- (id)_defaultPaymentCardExpressStatuses:(id)arg1;	// IMP=0x001000000081c8d1
- (id)_defaultPaymentCardsFromLibrary:(id)arg1;	// IMP=0x001000000081c634
- (void)_transitTopUpMessageForPass:(id)arg1 paymentMethods:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000081b847
- (_Bool)_balanceIsLessThanRouteCost:(id)arg1 forPass:(id)arg2;	// IMP=0x001000000081b368
- (id)_exclamationMarkImage;	// IMP=0x001000000081b26e
- (id)_messageFromBalance:(id)arg1 passName:(id)arg2;	// IMP=0x001000000081b0ad
- (void)_fetchLibrary:(CDUnknownBlockType)arg1;	// IMP=0x001000000081ae32
- (void)userHasPaymentCardWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000081abac
- (void)dealloc;	// IMP=0x001000000081ab37
- (id)initWithIsTourist:(_Bool)arg1;	// IMP=0x001000000081aa10

@end
