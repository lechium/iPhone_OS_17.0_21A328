//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ADPassthroughEndpointerDelegate, Endpointer;

@interface ADPassthroughEndpointer : NSObject
{
    id <ADPassthroughEndpointerDelegate> _delegate;	// 8 = 0x8
    id <Endpointer> _functionalEndpointer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000012dbff
@property(retain, nonatomic) id <Endpointer> functionalEndpointer; // @synthesize functionalEndpointer=_functionalEndpointer;
@property(nonatomic) __weak id <ADPassthroughEndpointerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x001000000012dbaf
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000012db61
@property double endWaitTime;
@property double interspeechWaitTime;
@property double startWaitTime;
@property int endpointMode;
- (void)reset;	// IMP=0x001000000012da9b
- (int)getStatus:(struct AudioQueueBuffer *)arg1;	// IMP=0x001000000012da04
- (_Bool)configureWithASBD:(struct AudioStreamBasicDescription *)arg1 andFrameRate:(unsigned int)arg2;	// IMP=0x001000000012d96b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

