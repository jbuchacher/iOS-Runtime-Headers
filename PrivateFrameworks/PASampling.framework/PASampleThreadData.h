/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleThreadData : NSObject <PASerializable> {
    int  currentScheduledPriority;
    unsigned long long  dispatchQueueId;
    unsigned char  ioTier;
    unsigned int  isDarwinBG;
    unsigned int  isGlobalForcedIdle;
    unsigned int  isIOPassive;
    unsigned int  isIdleWorkQueue;
    unsigned int  isRunning;
    unsigned int  isSuspended;
    PASampleFrame * leafKernelFrame;
    PASampleFrame * leafUserFrame;
    NSString * name;
    int  schedulerFlags;
    int  state;
    int  staticPriority;
    unsigned long long  systemTimeInNs;
    unsigned long long  threadId;
    BOOL  threadQos;
    BOOL  threadRequestedQos;
    BOOL  threadRequestedQosOverride;
    unsigned long long  userTimeInNs;
    unsigned long long  voucherIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasAnyInfo;
@property (readonly) BOOL hasDispatchQueue;
@property (readonly) BOOL hasValidPowerstatsFlags;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isAbortingInterruptibleWaits;
@property (readonly) BOOL isAbortingInterruptibleWaitsAtSafePoints;
@property (readonly) BOOL isHaltedAtTermination;
@property (readonly) BOOL isProcessorIdleThread;
@property (readonly) BOOL isRunnable;
@property (readonly) BOOL isStopped;
@property (readonly) BOOL isWaiting;
@property (readonly) BOOL isWaitingUninterruptibly;
@property (readonly) unsigned int powerstatsFlags;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)debugDescription;
- (BOOL)hasAnyInfo;
- (BOOL)hasDispatchQueue;
- (BOOL)hasValidPowerstatsFlags;
- (unsigned int)hash;
- (id)initWithKCDataStackshotDeltaThread:(const struct thread_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; short x7; short x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; }*)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andOldThreadData:(id)arg5;
- (id)initWithKCDataStackshotThread:(const struct thread_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; short x14; short x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; }*)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andMachTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg5;
- (id)initWithStackshotThread:(id)arg1 andLeafUserFrame:(id)arg2 andLeafKernelFrame:(id)arg3;
- (id)initWithTid:(unsigned long long)arg1;
- (BOOL)isAbortingInterruptibleWaits;
- (BOOL)isAbortingInterruptibleWaitsAtSafePoints;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHaltedAtTermination;
- (BOOL)isProcessorIdleThread;
- (BOOL)isRunnable;
- (BOOL)isStackEqualTo:(id)arg1;
- (BOOL)isStopped;
- (BOOL)isWaiting;
- (BOOL)isWaitingUninterruptibly;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned int)powerstatsFlags;
- (unsigned long)sizeInBytesForSerializedVersion;
- (id)stack;

@end