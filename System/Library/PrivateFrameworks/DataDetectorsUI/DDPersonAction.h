//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BCSBusinessItem, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface DDPersonAction
{
    _Bool _contactExists;	// 85 = 0x55
    _Bool _fromCNContact;	// 86 = 0x56
    BCSBusinessItem *_bizItem;	// 88 = 0x58
    _Bool _bizItemIsMessageable;	// 96 = 0x60
    NSString *_lastBizNumberFetched;	// 104 = 0x68
    UIViewController *_menuHeaderViewController;	// 112 = 0x70
}

+ (id)viewControllerProviderClass;	// IMP=0x0060000000006ce7
+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;	// IMP=0x00600000000069be
- (void).cxx_destruct;	// IMP=0x00000000000094c9
- (id)menuHeaderView;	// IMP=0x000000000000918c
- (_Bool)menuHasHeaderView;	// IMP=0x000000000000908a
- (id)menuHeaderViewController;	// IMP=0x0000000000009030
- (_Bool)prefersActionMenuStyle;	// IMP=0x0000000000009028
- (struct CGSize)suggestedContentSize;	// IMP=0x0000000000009012
- (id)menuActions;	// IMP=0x0000000000008e8d
- (id)_menuActionsForPersonWithNumber:(id)arg1 email:(id)arg2;	// IMP=0x0000000000008038
- (id)_menuActionsForBusinessWithNumber:(id)arg1;	// IMP=0x0000000000007baf
- (_Bool)phoneNumberIsBusiness:(id)arg1;	// IMP=0x0000000000007a83
- (id)_appendActionsForPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 class:(Class)arg3 filter:(id)arg4 scheme:(id)arg5;	// IMP=0x0000000000006cf4
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;	// IMP=0x0000000000006bb7

@end

