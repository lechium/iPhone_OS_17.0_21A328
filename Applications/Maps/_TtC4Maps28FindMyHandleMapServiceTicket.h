//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC4Maps28FindMyHandleMapServiceTicket : NSObject
{
    MISSING_TYPE *handle;	// 0 = 0x0
    MISSING_TYPE *coordinate;	// 0 = 0x0
    MISSING_TYPE *ticket;	// 0 = 0x0
    MISSING_TYPE *isCancelled;	// 1163157343 = 0x45545f5f
}

- (void).cxx_destruct;	// IMP=0x00400000000912d0
- (id)init;	// IMP=0x0010000000091270
- (void)applyToCorrectedSearch:(id)arg1;	// IMP=0x0000000000090b20
- (void)cancel;	// IMP=0x0010000000090af0
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=isCancelled;
- (_Bool)isCancelled;	// IMP=0x001000000008ea60

@end

