//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITableViewIgnoreDragsTokenImpl : NSObject
{
    CDUnknownBlockType _didEndHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001268e07
- (void)dealloc;	// IMP=0x0000000001268dc9
- (void)endIgnoringDrags;	// IMP=0x0000000001268d89
- (id)initWithDidEndHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000001268d16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

