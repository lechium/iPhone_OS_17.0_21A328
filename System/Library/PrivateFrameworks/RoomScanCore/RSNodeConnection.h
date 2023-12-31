//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RoomScanCore/RSNodeOutputConsumer-Protocol.h>

@class NSString, RSNodeInput, RSNodeOutput;

@interface RSNodeConnection : NSObject <RSNodeOutputConsumer>
{
    _Bool _attached;	// 8 = 0x8
    RSNodeOutput *_output;	// 16 = 0x10
    RSNodeInput *_input;	// 24 = 0x18
}

+ (id)new;	// IMP=0x0010000000032b28
- (void).cxx_destruct;	// IMP=0x0000000000032b04
@property(readonly, nonatomic, getter=isAttached) _Bool attached; // @synthesize attached=_attached;
@property(readonly, nonatomic) __weak RSNodeInput *input; // @synthesize input=_input;
@property(readonly, nonatomic) __weak RSNodeOutput *output; // @synthesize output=_output;
- (void)consumeMessage:(id)arg1 fromOutput:(id)arg2;	// IMP=0x0000000000032ac9
- (_Bool)detachWithError:(id *)arg1;	// IMP=0x0000000000032ac1
- (_Bool)attachWithError:(id *)arg1;	// IMP=0x0000000000032ab9
- (id)initWithOutput:(id)arg1 input:(id)arg2;	// IMP=0x0000000000032a27
- (id)init;	// IMP=0x0000000000032a11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

