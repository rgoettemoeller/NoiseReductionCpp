// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_INPUTCAMERADATA_CAMERA_DATA_H_
#define FLATBUFFERS_GENERATED_INPUTCAMERADATA_CAMERA_DATA_H_

#include "include/flatbuffers/flatbuffers.h"

namespace Camera {
namespace Data {

struct dataPoint;

struct inceptiveEventsBuffer;

struct trailingEventsBuffer;

struct DataCollection;
struct DataCollectionBuilder;

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) dataPoint FLATBUFFERS_FINAL_CLASS {
 private:
  uint16_t x_;
  uint16_t y_;
  int32_t padding0__;
  uint64_t time_;
  uint8_t polarity_;
  int8_t padding1__;  int16_t padding2__;  int32_t padding3__;

 public:
  dataPoint() {
    memset(static_cast<void *>(this), 0, sizeof(dataPoint));
  }
  dataPoint(uint16_t _x, uint16_t _y, uint64_t _time, uint8_t _polarity)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        padding0__(0),
        time_(flatbuffers::EndianScalar(_time)),
        polarity_(flatbuffers::EndianScalar(_polarity)),
        padding1__(0),
        padding2__(0),
        padding3__(0) {
    (void)padding0__;
    (void)padding1__;    (void)padding2__;    (void)padding3__;
  }
  uint16_t x() const {
    return flatbuffers::EndianScalar(x_);
  }
  uint16_t y() const {
    return flatbuffers::EndianScalar(y_);
  }
  uint64_t time() const {
    return flatbuffers::EndianScalar(time_);
  }
  uint8_t polarity() const {
    return flatbuffers::EndianScalar(polarity_);
  }
};
FLATBUFFERS_STRUCT_END(dataPoint, 24);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) inceptiveEventsBuffer FLATBUFFERS_FINAL_CLASS {
 private:
  uint16_t x_;
  uint16_t y_;
  int32_t padding0__;
  uint64_t time_;
  uint32_t trailingNum_;
  int32_t padding1__;

 public:
  inceptiveEventsBuffer() {
    memset(static_cast<void *>(this), 0, sizeof(inceptiveEventsBuffer));
  }
  inceptiveEventsBuffer(uint16_t _x, uint16_t _y, uint64_t _time, uint32_t _trailingNum)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        padding0__(0),
        time_(flatbuffers::EndianScalar(_time)),
        trailingNum_(flatbuffers::EndianScalar(_trailingNum)),
        padding1__(0) {
    (void)padding0__;
    (void)padding1__;
  }
  uint16_t x() const {
    return flatbuffers::EndianScalar(x_);
  }
  uint16_t y() const {
    return flatbuffers::EndianScalar(y_);
  }
  uint64_t time() const {
    return flatbuffers::EndianScalar(time_);
  }
  uint32_t trailingNum() const {
    return flatbuffers::EndianScalar(trailingNum_);
  }
};
FLATBUFFERS_STRUCT_END(inceptiveEventsBuffer, 24);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) trailingEventsBuffer FLATBUFFERS_FINAL_CLASS {
 private:
  uint16_t x_;
  uint16_t y_;
  int32_t padding0__;
  uint64_t time_;

 public:
  trailingEventsBuffer() {
    memset(static_cast<void *>(this), 0, sizeof(trailingEventsBuffer));
  }
  trailingEventsBuffer(uint16_t _x, uint16_t _y, uint64_t _time)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        padding0__(0),
        time_(flatbuffers::EndianScalar(_time)) {
    (void)padding0__;
  }
  uint16_t x() const {
    return flatbuffers::EndianScalar(x_);
  }
  uint16_t y() const {
    return flatbuffers::EndianScalar(y_);
  }
  uint64_t time() const {
    return flatbuffers::EndianScalar(time_);
  }
};
FLATBUFFERS_STRUCT_END(trailingEventsBuffer, 16);

struct DataCollection FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DataCollectionBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_COLLECTEDDATA = 4,
    VT_COLLECTEDINCEPTIVE = 6,
    VT_COLLECTEDTRALING = 8
  };
  const flatbuffers::Vector<const Camera::Data::dataPoint *> *collectedData() const {
    return GetPointer<const flatbuffers::Vector<const Camera::Data::dataPoint *> *>(VT_COLLECTEDDATA);
  }
  const flatbuffers::Vector<const Camera::Data::inceptiveEventsBuffer *> *collectedInceptive() const {
    return GetPointer<const flatbuffers::Vector<const Camera::Data::inceptiveEventsBuffer *> *>(VT_COLLECTEDINCEPTIVE);
  }
  const flatbuffers::Vector<const Camera::Data::trailingEventsBuffer *> *collectedTraling() const {
    return GetPointer<const flatbuffers::Vector<const Camera::Data::trailingEventsBuffer *> *>(VT_COLLECTEDTRALING);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_COLLECTEDDATA) &&
           verifier.VerifyVector(collectedData()) &&
           VerifyOffset(verifier, VT_COLLECTEDINCEPTIVE) &&
           verifier.VerifyVector(collectedInceptive()) &&
           VerifyOffset(verifier, VT_COLLECTEDTRALING) &&
           verifier.VerifyVector(collectedTraling()) &&
           verifier.EndTable();
  }
};

struct DataCollectionBuilder {
  typedef DataCollection Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_collectedData(flatbuffers::Offset<flatbuffers::Vector<const Camera::Data::dataPoint *>> collectedData) {
    fbb_.AddOffset(DataCollection::VT_COLLECTEDDATA, collectedData);
  }
  void add_collectedInceptive(flatbuffers::Offset<flatbuffers::Vector<const Camera::Data::inceptiveEventsBuffer *>> collectedInceptive) {
    fbb_.AddOffset(DataCollection::VT_COLLECTEDINCEPTIVE, collectedInceptive);
  }
  void add_collectedTraling(flatbuffers::Offset<flatbuffers::Vector<const Camera::Data::trailingEventsBuffer *>> collectedTraling) {
    fbb_.AddOffset(DataCollection::VT_COLLECTEDTRALING, collectedTraling);
  }
  explicit DataCollectionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DataCollectionBuilder &operator=(const DataCollectionBuilder &);
  flatbuffers::Offset<DataCollection> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<DataCollection>(end);
    return o;
  }
};

inline flatbuffers::Offset<DataCollection> CreateDataCollection(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<const Camera::Data::dataPoint *>> collectedData = 0,
    flatbuffers::Offset<flatbuffers::Vector<const Camera::Data::inceptiveEventsBuffer *>> collectedInceptive = 0,
    flatbuffers::Offset<flatbuffers::Vector<const Camera::Data::trailingEventsBuffer *>> collectedTraling = 0) {
  DataCollectionBuilder builder_(_fbb);
  builder_.add_collectedTraling(collectedTraling);
  builder_.add_collectedInceptive(collectedInceptive);
  builder_.add_collectedData(collectedData);
  return builder_.Finish();
}

inline flatbuffers::Offset<DataCollection> CreateDataCollectionDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<Camera::Data::dataPoint> *collectedData = nullptr,
    const std::vector<Camera::Data::inceptiveEventsBuffer> *collectedInceptive = nullptr,
    const std::vector<Camera::Data::trailingEventsBuffer> *collectedTraling = nullptr) {
  auto collectedData__ = collectedData ? _fbb.CreateVectorOfStructs<Camera::Data::dataPoint>(*collectedData) : 0;
  auto collectedInceptive__ = collectedInceptive ? _fbb.CreateVectorOfStructs<Camera::Data::inceptiveEventsBuffer>(*collectedInceptive) : 0;
  auto collectedTraling__ = collectedTraling ? _fbb.CreateVectorOfStructs<Camera::Data::trailingEventsBuffer>(*collectedTraling) : 0;
  return Camera::Data::CreateDataCollection(
      _fbb,
      collectedData__,
      collectedInceptive__,
      collectedTraling__);
}

inline const Camera::Data::DataCollection *GetDataCollection(const void *buf) {
  return flatbuffers::GetRoot<Camera::Data::DataCollection>(buf);
}

inline const Camera::Data::DataCollection *GetSizePrefixedDataCollection(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Camera::Data::DataCollection>(buf);
}

inline bool VerifyDataCollectionBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Camera::Data::DataCollection>(nullptr);
}

inline bool VerifySizePrefixedDataCollectionBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Camera::Data::DataCollection>(nullptr);
}

inline void FinishDataCollectionBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Camera::Data::DataCollection> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedDataCollectionBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Camera::Data::DataCollection> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Data
}  // namespace Camera

#endif  // FLATBUFFERS_GENERATED_INPUTCAMERADATA_CAMERA_DATA_H_
