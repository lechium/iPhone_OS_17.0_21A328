//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface BFFLinkHandler : NSObject
{
    UIButton *_button;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000091ba
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)buttonPressed:(id)arg1;	// IMP=0x0000000000009115
- (id)init;	// IMP=0x000000000000900f

@end

