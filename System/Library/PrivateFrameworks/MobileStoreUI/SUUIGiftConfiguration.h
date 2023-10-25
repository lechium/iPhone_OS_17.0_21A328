//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSOperationQueue, NSString, NSURL, SUUIClientContext;

__attribute__((visibility("hidden")))
@interface SUUIGiftConfiguration : NSObject
{
    NSArray *_charities;	// 8 = 0x8
    NSMutableDictionary *_charityImages;	// 16 = 0x10
    SUUIClientContext *_clientContext;	// 24 = 0x18
    NSString *_currencySymbol;	// 32 = 0x20
    long long _currencySymbolPosition;	// 40 = 0x28
    NSArray *_fixedGiftAmountLabels;	// 48 = 0x30
    NSArray *_fixedGiftAmountValues;	// 56 = 0x38
    NSString *_senderName;	// 64 = 0x40
    struct _NSRange _giftAmountRange;	// 72 = 0x48
    NSURL *_giftPurchaseURL;	// 88 = 0x58
    NSURL *_giftValidationURL;	// 96 = 0x60
    long long _maximumMessageLength;	// 104 = 0x68
    NSHashTable *_observers;	// 112 = 0x70
    NSOperationQueue *_operationQueue;	// 120 = 0x78
    NSString *_senderEmailAddress;	// 128 = 0x80
    NSString *_storeFrontName;	// 136 = 0x88
    NSArray *_themes;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000134088
@property(readonly, nonatomic) NSArray *themes; // @synthesize themes=_themes;
@property(readonly, nonatomic) NSString *storeFrontName; // @synthesize storeFrontName=_storeFrontName;
@property(readonly, nonatomic) NSString *senderEmailAddress; // @synthesize senderEmailAddress=_senderEmailAddress;
@property(readonly, nonatomic) long long maximumMessageLength; // @synthesize maximumMessageLength=_maximumMessageLength;
@property(readonly, nonatomic) NSURL *giftValidationURL; // @synthesize giftValidationURL=_giftValidationURL;
@property(readonly, nonatomic) NSURL *giftPurchaseURL; // @synthesize giftPurchaseURL=_giftPurchaseURL;
@property(readonly, nonatomic) struct _NSRange giftAmountRange; // @synthesize giftAmountRange=_giftAmountRange;
@property(readonly, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(readonly, nonatomic) NSArray *fixedGiftAmountValues; // @synthesize fixedGiftAmountValues=_fixedGiftAmountValues;
@property(readonly, nonatomic) NSArray *fixedGiftAmountLabels; // @synthesize fixedGiftAmountLabels=_fixedGiftAmountLabels;
@property(readonly, nonatomic) long long currencySymbolPosition; // @synthesize currencySymbolPosition=_currencySymbolPosition;
@property(readonly, nonatomic) NSString *currencySymbol; // @synthesize currencySymbol=_currencySymbol;
@property(readonly, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;	// IMP=0x0000000000133dc7
- (void)_setHeaderImage:(id)arg1 forTheme:(id)arg2;	// IMP=0x0000000000133bc1
- (void)_loadThemeImages;	// IMP=0x0000000000133772
- (void)_finishLoadAccountInfoWithResponse:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001335ba
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001324b3
- (void)removeObserver:(id)arg1;	// IMP=0x000000000013247c
- (id)logoImageForCharity:(id)arg1;	// IMP=0x0000000000132419
- (void)loadLogoForCharity:(id)arg1;	// IMP=0x0000000000132105
- (void)loadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000131c56
- (_Bool)loadCachedConfiguration;	// IMP=0x0000000000131c4e
- (id)charityForIdentifier:(id)arg1;	// IMP=0x0000000000131a89
- (void)addObserver:(id)arg1;	// IMP=0x00000000001319e3
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;	// IMP=0x000000000013194a

@end
