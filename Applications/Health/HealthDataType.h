//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class NSNumber;

@interface HealthDataType : INObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000008bf40
- (id)initWithCoder:(id)arg1;	// IMP=0x004000000008c250
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;	// IMP=0x001000000008c140

// Remaining properties
@property(nonatomic, retain) NSNumber *dataTypeCode; // @dynamic dataTypeCode;

@end
