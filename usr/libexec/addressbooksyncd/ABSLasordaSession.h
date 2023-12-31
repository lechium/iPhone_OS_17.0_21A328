//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ABSContactsShadow, ABSContactsSource, ABSValidationSyncObject, NDTResultsFIFO, NSString, NSThread;

@interface ABSLasordaSession
{
    NSThread *_producerThread;	// 8 = 0x8
    NDTResultsFIFO *_fifo;	// 16 = 0x10
    ABSContactsShadow *;	// 24 = 0x18
    struct ct_green_tea_logger_s *_gtLogger;	// 32 = 0x20
    ABSValidationSyncObject *_startCensus;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    _Bool _sessionSupportsContactAccountIDs;	// 56 = 0x38
    NSString *_favsSha;	// 64 = 0x40
    NSString *_acctsSha;	// 72 = 0x48
    _Bool _isReset;	// 80 = 0x50
    ABSContactsSource *_contactsSource;	// 88 = 0x58
    unsigned long long _delayUs;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000002d4ed
@property(nonatomic) unsigned long long delayUs; // @synthesize delayUs=_delayUs;
@property(retain, nonatomic) ABSContactsSource *contactsSource; // @synthesize contactsSource=_contactsSource;
- (void)terminate;	// IMP=0x001000000002d44f
- (void)dealloc;	// IMP=0x001000000002d40e
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x001000000002d206
- (void)_batchSupplier;	// IMP=0x001000000002cdba
- (void)_presentAlert;	// IMP=0x001000000002cdb4
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x001000000002c0c4
- (void)lateSetupForSession:(id)arg1;	// IMP=0x001000000002be22

@end

