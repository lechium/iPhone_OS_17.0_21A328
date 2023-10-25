//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICDocCamRectangleResultsQueue : NSObject
{
    NSMutableArray *_array;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ab6e2
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (long long)size;	// IMP=0x00000000000ab643
- (void)apply:(CDUnknownBlockType)arg1 fromIndex:(long long)arg2 toIndex:(unsigned long long)arg3;	// IMP=0x00000000000ab4b7
- (void)apply:(CDUnknownBlockType)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000ab3fc
- (id)peekTail;	// IMP=0x00000000000ab301
- (id)peek:(long long)arg1;	// IMP=0x00000000000ab1fb
- (id)peek;	// IMP=0x00000000000ab10d
- (void)clear;	// IMP=0x00000000000ab08d
- (id)dequeue;	// IMP=0x00000000000aafac
- (void)enqueue:(id)arg1;	// IMP=0x00000000000aaf11
- (id)init;	// IMP=0x00000000000aaea6

@end
