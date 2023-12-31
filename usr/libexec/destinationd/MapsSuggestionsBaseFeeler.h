//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MapsSuggestionsFeelerDelegate;

@interface MapsSuggestionsBaseFeeler : NSObject
{
    id <MapsSuggestionsFeelerDelegate> _delegate;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (_Bool)isEnabled;	// IMP=0x002000000002e2a5
- (void).cxx_destruct;	// IMP=0x002000000002e3de
@property(readonly, copy) NSString *description;
- (_Bool)canProduceSignalType:(long long)arg1;	// IMP=0x001000000002e319
- (long long)disposition;	// IMP=0x001000000002e303
@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;	// IMP=0x001000000002e283
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000002e20d
- (id)initWithDelegate:(id)arg1 name:(id)arg2;	// IMP=0x001000000002e141

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

