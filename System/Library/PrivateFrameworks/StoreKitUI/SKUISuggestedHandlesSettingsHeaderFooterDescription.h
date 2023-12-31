//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SKUIClientContext;
@protocol SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;

__attribute__((visibility("hidden")))
@interface SKUISuggestedHandlesSettingsHeaderFooterDescription
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    NSArray *_suggestedHandles;	// 16 = 0x10
    id <SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002cf8ab
@property(nonatomic) __weak id <SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> delegate; // @synthesize delegate=_delegate;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;	// IMP=0x00000000002cf86d
- (id)suggestedHandles;	// IMP=0x00000000002cf848
- (void)selectedHandleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002cf77c
- (id)helpText;	// IMP=0x00000000002cf6bc
- (id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000002cf5a9

@end

