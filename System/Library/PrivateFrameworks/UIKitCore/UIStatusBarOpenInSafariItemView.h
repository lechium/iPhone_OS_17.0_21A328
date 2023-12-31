//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarOpenInSafariItemView
{
    UISystemNavigationAction *_systemNavigationAction;	// 8 = 0x8
    NSString *_destinationText;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000010e157f
@property(retain, nonatomic) NSString *destinationText; // @synthesize destinationText=_destinationText;
@property(retain, nonatomic) UISystemNavigationAction *systemNavigationAction; // @synthesize systemNavigationAction=_systemNavigationAction;
- (id)shortenedTitleWithCompressionLevel:(int)arg1;	// IMP=0x00000000010e148c
- (id)_nominalTitleWithDestinationText:(id)arg1;	// IMP=0x00000000010e140a
- (void)userDidActivateButton:(id)arg1;	// IMP=0x00000000010e1370
- (_Bool)layoutImageOnTrailingEdge;	// IMP=0x00000000010e1368
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x00000000010e0fae
- (id)_displayStringFromURL:(id)arg1;	// IMP=0x00000000010e0f4e

@end

