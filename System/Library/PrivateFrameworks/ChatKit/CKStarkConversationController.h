//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPInterfaceController, CPListTemplate, NSDateFormatter, NSString;

__attribute__((visibility("hidden")))
@interface CKStarkConversationController : NSObject
{
    CPInterfaceController *_interfaceController;	// 8 = 0x8
    CPListTemplate *_conversationListTemplate;	// 16 = 0x10
    NSDateFormatter *_dateFormatter;	// 24 = 0x18
    NSDateFormatter *_timeFormatter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000120f1b
@property(retain, nonatomic) NSDateFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) CPListTemplate *conversationListTemplate; // @synthesize conversationListTemplate=_conversationListTemplate;
@property(retain, nonatomic) CPInterfaceController *interfaceController; // @synthesize interfaceController=_interfaceController;
- (void)_resortAndReloadData;	// IMP=0x0000000000120acc
- (void)conversationListDidChange:(id)arg1;	// IMP=0x0000000000120aba
- (void)templateWillAppear:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000120aa8
- (id)initWithInterfaceController:(id)arg1;	// IMP=0x0000000000120809

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

