//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKContactDenier, NSString;

@interface GKDeniedSuggestionsModifier : NSObject
{
    GKContactDenier *_denier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000a7065
@property(retain, nonatomic) GKContactDenier *denier; // @synthesize denier=_denier;
- (id)nonDeniedRecipientsFromInitialRecipients:(id)arg1;	// IMP=0x00100000000a6d27
- (id)modifySuggestions:(id)arg1;	// IMP=0x00100000000a6cbe
- (id)initWithContactDenier:(id)arg1;	// IMP=0x00100000000a6c53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

