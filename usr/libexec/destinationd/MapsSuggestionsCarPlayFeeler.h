//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSessionStatus, MapsSuggestionsMutableSignalPack, NSString;
@protocol MapsSuggestionsFeelerDelegate;

@interface MapsSuggestionsCarPlayFeeler
{
    MapsSuggestionsMutableSignalPack *_signalPack;	// 8 = 0x8
    CARSessionStatus *_carSessionStatus;	// 16 = 0x10
}

+ (_Bool)isEnabled;	// IMP=0x002000000001d228
- (void).cxx_destruct;	// IMP=0x002000000001d753
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x001000000001d69d
- (void)sessionDidConnect:(id)arg1;	// IMP=0x001000000001d5e4
- (_Bool)updateSignals;	// IMP=0x001000000001d40c
- (_Bool)stopUpdatingSignals;	// IMP=0x001000000001d404
- (_Bool)startUpdatingSignals;	// IMP=0x001000000001d3ef
- (id)initWithDelegate:(id)arg1 name:(id)arg2;	// IMP=0x001000000001d24c
- (_Bool)canProduceSignalType:(long long)arg1;	// IMP=0x001000000001d23f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

