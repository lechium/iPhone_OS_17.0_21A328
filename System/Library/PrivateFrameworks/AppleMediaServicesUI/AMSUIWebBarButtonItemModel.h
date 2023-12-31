//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIWebAppViewModel, AMSUIWebButtonModel, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebBarButtonItemModel : NSObject
{
    AMSUIWebAppViewModel *_appViewModel;	// 8 = 0x8
    AMSUIWebButtonModel *_buttonModel;	// 16 = 0x10
    NSArray *_conditionalButtonModels;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000084665
@property(retain, nonatomic) NSArray *conditionalButtonModels; // @synthesize conditionalButtonModels=_conditionalButtonModels;
@property(retain, nonatomic) AMSUIWebButtonModel *buttonModel; // @synthesize buttonModel=_buttonModel;
@property(retain, nonatomic) AMSUIWebAppViewModel *appViewModel; // @synthesize appViewModel=_appViewModel;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000084179

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

